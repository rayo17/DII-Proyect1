#ifndef SERVIDOR_H
#define SERVIDOR_H
#include<tarjeta.h>
#include<QString>
//#include<QTcpServer>
//#include<QTcpSocket>
#include<paquete.h>

#include <QWidget>
class QTcpSocket;
class QTcpServer;
class Paquete;

QT_BEGIN_NAMESPACE
namespace Ui { class Servidor; }
QT_END_NAMESPACE
class Tarjeta;
class Servidor : public QWidget
{
    Q_OBJECT

public:
    Servidor(QWidget *parent = nullptr);
    ~Servidor();
    void enviarCarta();



private slots:
    void on_iniciar_clicked();
    void nuevaConeccion();
    void leer();


private:
    QTextStream stream;
    Ui::Servidor *ui;
    QTcpSocket *socket;//objeto socket para enviar y recibir datos
    QTcpServer *server; // objeto server para abrir puerto para conectarse
    Tarjeta *arrayTarjeta[5];
    Paquete *paqueteDatos;
    //QString nombres[];
};
#endif // SERVIDOR_H
