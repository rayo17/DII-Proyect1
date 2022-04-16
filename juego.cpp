#include "juego.h"
#include "pantallagame.h"
#include "ui_pantallagame.h"
#include<iostream>
#include<string>
using namespace std;

Juego::Juego(QObject *parent)//contructor
    : QObject{parent}//
{
   timer=new QTimer(this);// created timer
   connect(timer,SIGNAL(timeout()),SLOT(stateUpdate()));//se conecta el timer y se actualiza

   pantalla= new PantallaGame();//objeto PantallaGame creado
}

void Juego::startGame(){//start the Game
    puntaje=0; //point zero
    time.setHMS(0,1,0);//colococa el formatato hora,minutos y segundos
    pantalla->ui->puntajeL->setText(QString::number(puntaje));

    //pantalla->ui->cronometro->setText(time.toString("m:ss"));//puntero pantalla
    timer->start(1000);// el temporizador se inicializa en un minuto
    pantalla->show();// se muestra la pantalla



}

void Juego::startTime(){


}

void Juego::result(){


}


void Juego::timeUpdate(){// metedo actualizador del tiempo
    time=time.addSecs(-1);// resta 1 segundo al tiempo actual para que parezca que se esta agotando
    pantalla->ui->cronometro->setText(time.toString("m:ss"));//se colocha en pantalla la actualizacion

}

void Juego::stateUpdate(){// metodo que se ejecuta con el SLOT
    timeUpdate();
    result();

}
