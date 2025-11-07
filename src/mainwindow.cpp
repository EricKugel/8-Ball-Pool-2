#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) 
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, this, []() {
        QMessageBox::information(nullptr, "Hello", "Hello baller!");
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}