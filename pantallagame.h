#ifndef PANTALLAGAME_H
#define PANTALLAGAME_H

#include <QWidget>

namespace Ui {
class PantallaGame;
}

class PantallaGame : public QWidget
{
    Q_OBJECT

public:
    explicit PantallaGame(QWidget *parent = nullptr);
    ~PantallaGame();

private:
    Ui::PantallaGame *ui;
};

#endif // PANTALLAGAME_H
