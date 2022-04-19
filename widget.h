#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QMessageBox>
#include<paquete.h>

class Juego;
QT_BEGIN_NAMESPACE
namespace Ui { class Widget;}


QT_END_NAMESPACE
class QTcpSocket;
class Juego;
class Paquete;
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void envia(const QString &line);
    void enviarNombreJugador1(QTextStream &,const QString &);
    void enviarNombreJugador2();

private slots:


    void on_start_clicked();

    void on_quit_clicked();

private:
    Ui::Widget *ui;//objeto ui
    QTcpSocket *Csocket;//objeto socket
    Juego *game;
    QMessageBox messageBx;
    QTextStream stream;
    Paquete datosEnviados;

};
#endif // WIDGET_H
