QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    estadomemoria.cpp \
    kn.cpp \
    main.cpp \
    paquete.cpp \
    servidor.cpp \
    tarjeta.cpp

HEADERS += \
    estadomemoria.h \
    kn.h \
    paquete.h \
    servidor.h \
    tarjeta.h

FORMS += \
    estadomemoria.ui \
    servidor.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    js.js

RESOURCES += \
    recursos.qrc
