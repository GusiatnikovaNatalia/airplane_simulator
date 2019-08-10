#include "mainwindow.h"
#include <QtGui>
#include <QGraphicsView>
#include <QGraphicsEllipseItem>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow mainWindow;

    mainWindow.show();
//взлет: закрылки и предкрылки видвигаются вниз
//полет: закр и предкр в исходное положение, элероны для
//       сменыы траектории

//first trial QGraphicsView
    return a.exec();
}
