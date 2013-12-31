QT       += core gui sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = purchase

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    bill.cpp

HEADERS += \
    mainwindow.h \
    bill.h

FORMS += \
    bill.ui
