#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "administrateurs.h"
namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_cnxbouton_clicked();

private:
    Ui::Login *ui;
    administrateurs tmpadmin;
};

#endif // LOGIN_H
