#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "evenementinter.h"
#include "sessioninter.h"
#include "admininterface.h"
#include "ramzi.h"
#include "baha.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Home");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    EvenementInter *ev = new EvenementInter();
    ev->show();

}

void MainWindow::on_pushButton_2_clicked()
{
    sessioninter *si = new sessioninter();
    si->show();

}

void MainWindow::on_pushButton_3_clicked()
{
    admininterface *adm = new admininterface();
    adm->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    Ramzi *ram = new Ramzi();
    ram->show();

}

void MainWindow::on_pushButton_5_clicked()
{
    baha *g = new baha();
    g->show();
}
