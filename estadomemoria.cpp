#include "estadomemoria.h"
#include "ui_estadomemoria.h"

EstadoMemoria::EstadoMemoria(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EstadoMemoria)
{
    ui->setupUi(this);
}

EstadoMemoria::~EstadoMemoria()
{
    delete ui;
}
