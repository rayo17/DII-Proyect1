#include "widget.h"
#include "ui_widget.h"
#include <QTcpSocket>
#include "juego.h"
#include<QMessageBox>
#include<QTextStream>
#include<iostream>
#include<paquete.h>
//#include<QtTest/QTest>
using namespace std;
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    cout<<"hola"<<endl;
   QStringList listaNombres;




}

Widget::~Widget()
{
    delete ui;
    close();
}



void Widget::on_start_clicked()//eventos empezar juego
{


    Csocket=new QTcpSocket(this);//se crea el socket para la comunicacion entre el cliente servidor
    Csocket->connectToHost("localHost",8887);// se conecta al localhost puerto 8887
    messageBx.setWindowTitle("game memory");//mensaje cuando termina el juego
    //envia(ui->name1->text());


    if(Csocket->waitForConnected(3000)){
        QTextStream stream (Csocket);
         QMessageBox::information(this,"cliente","cliente conectaco");
         //enviarNombreJugador1(stream,ui->name1->text());
         datosEnviados.setnombre1(ui->name1->text());
         stream<<datosEnviados.getnombre1();

         game=new Juego;// objeto juego

         cout<<"se envia datos";

         game->startGame();// se inicia el juego

    }
    else
         {

         QMessageBox::critical(this,"cliente","no puede conectar al sevidor, no puede empezar la partida");


    //connect(Csocket,SIGNAL(readyRead()),this,SLOT(leer());


}
}

void Widget::on_quit_clicked()//eventos salida
{
    close();
}






void Widget::enviarNombreJugador1(QTextStream &stream,const QString &texto){
    if (Csocket){
    stream << texto;
    Csocket->flush();
    cout<<"enviando"<<endl;
    }

}

void Widget::enviarNombreJugador2(){

    
}
