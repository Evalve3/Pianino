#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondwindow.h"
#include <SFML/Audio.hpp>





MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    secondwindow window;
    window.setWindowTitle("Music");
    window.setModal(true);
    this->close();
    window.exec();

}
