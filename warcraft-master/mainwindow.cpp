#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "warcraft.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setCentralWidget(&warcraft);
}

MainWindow::~MainWindow()
{
    delete ui;
}

