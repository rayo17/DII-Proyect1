#include "widget.h"
#include "ui_widget.h"
#include <QTcpSocket>
#include "juego.h"
#include<QMessageBox>
#include<QTextStream>
#include<iostream>
//#include<QtTest/QTest>
using namespace std;
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);




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
         QMessageBox::information(this,"cliente","cliente conectaco");
         game=new Juego;// objeto juego
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

void Widget::envia(const QString &mensaje){
    QTextStream stream (Csocket);
    stream<<mensaje;
    Csocket->flush();


}

