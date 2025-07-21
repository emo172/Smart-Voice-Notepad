QT       += core gui multimedia
QT       += core gui texttospeech

greaterThan(QT_MAJOR_VERSION,4):QT+=widgets

TARGET = myMdi
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mdichild.cpp \
    login.cpp \
    widget.cpp \
    audio.cpp \
    http.cpp \
    speech.cpp

HEADERS  += mainwindow.h \
    mdichild.h \
    login.h \
    widget.h \
    audio.h \
    http.h \
    speech.h

FORMS    += mainwindow.ui \
    login.ui \
    widget.ui

RESOURCES += \
     myImage.qrc

RC_ICONS = myico4.ico
