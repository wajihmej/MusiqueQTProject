#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->mdp->setEchoMode(QLineEdit::Password);
}

Login::~Login()
{
    delete ui;
}

void Login::on_cnxbouton_clicked()
{
    QSqlQuery query;

    QString nomutil = ui->nomutil->text();
    QString mdp = ui->mdp->text();

    query =tmpadmin.login(nomutil,mdp);
    if(query.exec())
    {
        if(query.next())
        {
            Login::close();
            MainWindow *m = new MainWindow();
            m->show();

        }
        else
        {
            ui->msg->setText("Nom utilisateur ou mdp incorrect.");
        }
    }

}
