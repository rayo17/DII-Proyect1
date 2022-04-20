#ifndef ESTADOMEMORIA_H
#define ESTADOMEMORIA_H

#include <QWidget>

namespace Ui {
class EstadoMemoria;
}

class EstadoMemoria : public QWidget
{
    Q_OBJECT

public:
    explicit EstadoMemoria(QWidget *parent = nullptr);
    ~EstadoMemoria();

private:
    Ui::EstadoMemoria *ui;
};

#endif // ESTADOMEMORIA_H
