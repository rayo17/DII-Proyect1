#ifndef PAQUETE_H
#define PAQUETE_H

#include <QObject>
#include<QIODevice>

class Paquete : public QIODevice
{
    Q_OBJECT
public:
    explicit Paquete(QObject *parent = nullptr);
    void setnombre1(QString );
    void setnombre2(QString);
    QString getnombre1();
    QString getnombre2();

signals:

private:


    QString nombre1;
    QString nombre2;
};

#endif // PAQUETE_H
