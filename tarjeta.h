#ifndef TARJETA_H
#define TARJETA_H

#include <QObject>

class Tarjeta : public QObject
{
    Q_OBJECT
public:
    explicit Tarjeta(QObject *parent = nullptr);

signals:
private slots:
    void cargarTarjeta();
    void eliminarTarjeta();

};

#endif // TARJETA_H
