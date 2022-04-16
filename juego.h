#ifndef JUEGO_H
#define JUEGO_H

#include <QObject>
#include<QTimer>
#include<QTime>
class PantallaGame;
class Juego : public QObject
{
    Q_OBJECT
public:
    explicit Juego(QObject *parent = nullptr);
    void count_cartas();
    void set_puntaje();
    void set_tiempo();
    void startGame();
    void startTime();



signals:

private slots:
    void stateUpdate();
    void timeUpdate();
    void result();



private:
    int cartas;
    int puntaje;
    int tiempo;
    QTimer *timer;
    QTime time;
    PantallaGame *pantalla;




};

#endif // JUEGO_H
