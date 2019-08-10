#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsEllipseItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    //TODO: rename scene variable
    QGraphicsScene* scene;
    void createScene(const uint x, const uint y, const uint w, const uint h);
};

#endif // MAINWINDOW_H
