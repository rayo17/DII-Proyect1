#include "pantallagame.h"
#include "ui_pantallagame.h"

PantallaGame::PantallaGame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PantallaGame)
{
    ui->setupUi(this);
}

PantallaGame::~PantallaGame()
{
    delete ui;
}
