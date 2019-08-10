#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    this->resize(1000, 700);
    this->scene = new QGraphicsScene(0, 0, 0, 0);
    ui->graphicsView->setScene(scene);
    scene->addEllipse(0, 0, 150, 250);
    QLinearGradient gradient(200, 200, ui->graphicsView->width(), ui->graphicsView->height());
    gradient.setSpread(QGradient::RepeatSpread);
    scene->setBackgroundBrush(gradient);
}
//WARNING: now i dont need graphics, only coordinates of dots and some handling of airplane
MainWindow::~MainWindow()
{
    delete ui;
}

