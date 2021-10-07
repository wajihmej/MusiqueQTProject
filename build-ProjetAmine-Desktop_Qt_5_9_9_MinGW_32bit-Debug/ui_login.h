/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *nomutil;
    QLineEdit *mdp;
    QPushButton *cnxbouton;
    QLabel *msg;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(513, 289);
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 82, 91, 31));
        label_2 = new QLabel(Login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 125, 91, 31));
        nomutil = new QLineEdit(Login);
        nomutil->setObjectName(QStringLiteral("nomutil"));
        nomutil->setGeometry(QRect(230, 88, 113, 20));
        mdp = new QLineEdit(Login);
        mdp->setObjectName(QStringLiteral("mdp"));
        mdp->setGeometry(QRect(230, 130, 113, 20));
        cnxbouton = new QPushButton(Login);
        cnxbouton->setObjectName(QStringLiteral("cnxbouton"));
        cnxbouton->setGeometry(QRect(240, 190, 75, 23));
        msg = new QLabel(Login);
        msg->setObjectName(QStringLiteral("msg"));
        msg->setGeometry(QRect(190, 160, 171, 20));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Login", "Nom utilisateur :", Q_NULLPTR));
        label_2->setText(QApplication::translate("Login", "Mot de passe :", Q_NULLPTR));
        cnxbouton->setText(QApplication::translate("Login", "Se Connecter", Q_NULLPTR));
        msg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
