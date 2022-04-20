#include "paquete.h"

Paquete::Paquete(QObject *parent)
    : QIODeviceBase{parent}
{

}

void Paquete::setnombre1(QString Nombre1){
    nombre1=Nombre1;



}
void Paquete::setnombre2(QString Nombre2){
    nombre2=Nombre2;

}
QString Paquete::getnombre1(){
    return nombre1;
}
QString Paquete::getnombre2(){
    return nombre2;

}
