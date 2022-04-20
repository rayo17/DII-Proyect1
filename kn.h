#ifndef KN_H
#define KN_H

#include <QIODevice>
#include <QObject>

class kn : public QIODevice
{
    Q_OBJECT
public:
    explicit kn(QObject *parent = nullptr);
};

#endif // KN_H
