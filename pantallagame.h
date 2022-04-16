#ifndef PANTALLAGAME_H
#define PANTALLAGAME_H

#include <QWidget>

namespace Ui{
class PantallaGame;
}

class PantallaGame : public QWidget
{
    Q_OBJECT

public:
    explicit PantallaGame(QWidget *parent = nullptr);
    ~PantallaGame();
    Ui::PantallaGame *ui;




private:




};

#endif // PANTALLAGAME_H
