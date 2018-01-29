#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QWSServer>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//QWSServer::setBackground(QColor(0,0,0,0));
// QPixmap pixmap(":/img/windy680.png");
//    QPalette palette;
//    palette.setBrush(backgroundRole(), QBrush(pixmap));
//    setPalette(palette);
//setAttribute(Qt::WA_TranslucentBackground);//set backgroud tou ming
setWindowFlags(Qt::FramelessWindowHint);//set no top widge
QPalette pal;
  QString filename = QDir::currentPath()+ "/img/456.png";
  QPixmap pixmap(filename);
  pal.setBrush(QPalette::Window,QBrush(pixmap));
  setPalette(pal);
}

MainWindow::~MainWindow()
{
    delete ui;
}
