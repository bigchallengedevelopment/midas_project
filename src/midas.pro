#-------------------------------------------------
#
# Project created by QtCreator 2016-11-23T22:29:33
#
#-------------------------------------------------

QT       += core gui
QT       += opengl
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = midas
TEMPLATE = app


SOURCES += .\main\main.cpp\
        .\GUI\MainWindow\mainwindow.cpp \
    main/mcoreapplication.cpp \
    main/MApplication.cpp \
    Tcp/MSocketTcpServer.cpp \
    Tcp/MSocketTcpClient.cpp \
    Tcp/MSocketTcp.cpp

HEADERS  += .\GUI\MainWindow\mainwindow.h \
    main/mcoreapplication.h \
    main/MApplication.h \
    Tcp/MSocketTcpServer.h \
    Tcp/MSocketTcpClient.h \
    Tcp/MSocketTcp.h

FORMS    += .\GUI\MainWindow\mainwindow.ui
