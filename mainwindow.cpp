#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "title.h"
#include "ui_title.h"
#include "help.h"

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






void MainWindow::on_start_clicked()
{
    title *title_window = new title;
    title_window->show();
    this->hide();
}


void MainWindow::on_cancle_clicked()
{
    close();
}


void MainWindow::on_help_clicked()
{
    //打开使用说明
    help* h = new help;
    h->show();
    close();
}

