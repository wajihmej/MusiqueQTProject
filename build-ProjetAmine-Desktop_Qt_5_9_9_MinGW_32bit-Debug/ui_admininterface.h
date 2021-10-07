/********************************************************************************
** Form generated from reading UI file 'admininterface.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMININTERFACE_H
#define UI_ADMININTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admininterface
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btn_ajouter_admin;
    QLineEdit *nomutil;
    QLineEdit *mdp;
    QComboBox *comboBox_role;
    QGroupBox *groupBox_2;
    QPushButton *btn_ajouter_ens;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *nom;
    QLineEdit *prenom;
    QLineEdit *tel;
    QLineEdit *email;
    QLineEdit *salaire;
    QWidget *tab_2;
    QGroupBox *groupBox_3;
    QComboBox *comboBox_admin_modif;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_12;
    QLineEdit *mdp_modif;
    QLineEdit *nomutil_modif;
    QComboBox *comboBox_role_modif;
    QPushButton *modifier_admin;
    QGroupBox *groupBox_4;
    QComboBox *comboBox_admin_supp;
    QLabel *label_13;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QTextBrowser *nomutil_val;
    QTextBrowser *mdp_val;
    QTextBrowser *role_val;
    QPushButton *suprimer_admin;
    QTableView *tableView_admin;
    QLabel *label_29;
    QComboBox *comboBox_admin_tri;
    QLabel *label_30;
    QLineEdit *recherche;
    QWidget *tab_3;
    QGroupBox *groupBox_5;
    QComboBox *comboBox_ens_supp;
    QLabel *label_15;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QTextBrowser *prenom_val;
    QTextBrowser *tel_val;
    QTextBrowser *nom_val;
    QTextBrowser *salaire_val;
    QTextBrowser *email_val;
    QPushButton *supprime_ens_btn;
    QTableView *tableView_ens;
    QGroupBox *groupBox_6;
    QComboBox *comboBox_ens_modif;
    QLabel *label_14;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLineEdit *salaire_modif;
    QLineEdit *prenom_modif;
    QLineEdit *nom_modif;
    QLineEdit *email_modif;
    QLineEdit *tel_modif;
    QPushButton *modifer_ens_btn;

    void setupUi(QDialog *admininterface)
    {
        if (admininterface->objectName().isEmpty())
            admininterface->setObjectName(QStringLiteral("admininterface"));
        admininterface->resize(922, 681);
        tabWidget = new QTabWidget(admininterface);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(100, 90, 731, 571));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 90, 331, 291));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 101, 41));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 73, 101, 41));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 104, 101, 41));
        btn_ajouter_admin = new QPushButton(groupBox);
        btn_ajouter_admin->setObjectName(QStringLiteral("btn_ajouter_admin"));
        btn_ajouter_admin->setGeometry(QRect(120, 200, 75, 23));
        nomutil = new QLineEdit(groupBox);
        nomutil->setObjectName(QStringLiteral("nomutil"));
        nomutil->setGeometry(QRect(120, 49, 161, 31));
        mdp = new QLineEdit(groupBox);
        mdp->setObjectName(QStringLiteral("mdp"));
        mdp->setGeometry(QRect(120, 79, 161, 31));
        comboBox_role = new QComboBox(groupBox);
        comboBox_role->setObjectName(QStringLiteral("comboBox_role"));
        comboBox_role->setGeometry(QRect(120, 109, 161, 31));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(360, 90, 331, 291));
        btn_ajouter_ens = new QPushButton(groupBox_2);
        btn_ajouter_ens->setObjectName(QStringLiteral("btn_ajouter_ens"));
        btn_ajouter_ens->setGeometry(QRect(140, 230, 75, 23));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 35, 101, 41));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 65, 101, 41));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 94, 101, 41));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 126, 101, 41));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 155, 101, 41));
        nom = new QLineEdit(groupBox_2);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(80, 40, 161, 31));
        prenom = new QLineEdit(groupBox_2);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setGeometry(QRect(80, 70, 161, 31));
        tel = new QLineEdit(groupBox_2);
        tel->setObjectName(QStringLiteral("tel"));
        tel->setGeometry(QRect(80, 100, 161, 31));
        email = new QLineEdit(groupBox_2);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(80, 130, 161, 31));
        salaire = new QLineEdit(groupBox_2);
        salaire->setObjectName(QStringLiteral("salaire"));
        salaire->setGeometry(QRect(80, 160, 161, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(60, 20, 281, 211));
        comboBox_admin_modif = new QComboBox(groupBox_3);
        comboBox_admin_modif->setObjectName(QStringLiteral("comboBox_admin_modif"));
        comboBox_admin_modif->setGeometry(QRect(90, 29, 141, 22));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 60, 101, 41));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 93, 101, 41));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 124, 101, 41));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 30, 61, 21));
        mdp_modif = new QLineEdit(groupBox_3);
        mdp_modif->setObjectName(QStringLiteral("mdp_modif"));
        mdp_modif->setGeometry(QRect(100, 96, 121, 31));
        nomutil_modif = new QLineEdit(groupBox_3);
        nomutil_modif->setObjectName(QStringLiteral("nomutil_modif"));
        nomutil_modif->setGeometry(QRect(100, 66, 121, 31));
        comboBox_role_modif = new QComboBox(groupBox_3);
        comboBox_role_modif->setObjectName(QStringLiteral("comboBox_role_modif"));
        comboBox_role_modif->setGeometry(QRect(100, 120, 121, 31));
        modifier_admin = new QPushButton(groupBox_3);
        modifier_admin->setObjectName(QStringLiteral("modifier_admin"));
        modifier_admin->setGeometry(QRect(110, 170, 75, 23));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(440, 20, 241, 211));
        comboBox_admin_supp = new QComboBox(groupBox_4);
        comboBox_admin_supp->setObjectName(QStringLiteral("comboBox_admin_supp"));
        comboBox_admin_supp->setGeometry(QRect(80, 30, 141, 22));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 31, 61, 21));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 56, 101, 41));
        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 89, 101, 41));
        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 120, 101, 41));
        nomutil_val = new QTextBrowser(groupBox_4);
        nomutil_val->setObjectName(QStringLiteral("nomutil_val"));
        nomutil_val->setGeometry(QRect(100, 60, 131, 31));
        mdp_val = new QTextBrowser(groupBox_4);
        mdp_val->setObjectName(QStringLiteral("mdp_val"));
        mdp_val->setGeometry(QRect(100, 90, 131, 31));
        role_val = new QTextBrowser(groupBox_4);
        role_val->setObjectName(QStringLiteral("role_val"));
        role_val->setGeometry(QRect(100, 120, 131, 31));
        suprimer_admin = new QPushButton(groupBox_4);
        suprimer_admin->setObjectName(QStringLiteral("suprimer_admin"));
        suprimer_admin->setGeometry(QRect(90, 170, 75, 23));
        tableView_admin = new QTableView(tab_2);
        tableView_admin->setObjectName(QStringLiteral("tableView_admin"));
        tableView_admin->setGeometry(QRect(40, 315, 661, 221));
        label_29 = new QLabel(tab_2);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(160, 275, 91, 31));
        comboBox_admin_tri = new QComboBox(tab_2);
        comboBox_admin_tri->setObjectName(QStringLiteral("comboBox_admin_tri"));
        comboBox_admin_tri->setGeometry(QRect(531, 280, 131, 22));
        label_30 = new QLabel(tab_2);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(490, 275, 91, 31));
        recherche = new QLineEdit(tab_2);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setGeometry(QRect(232, 274, 211, 31));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        groupBox_5 = new QGroupBox(tab_3);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(440, 20, 241, 251));
        comboBox_ens_supp = new QComboBox(groupBox_5);
        comboBox_ens_supp->setObjectName(QStringLiteral("comboBox_ens_supp"));
        comboBox_ens_supp->setGeometry(QRect(80, 29, 141, 22));
        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 30, 61, 21));
        label_24 = new QLabel(groupBox_5);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 108, 101, 41));
        label_25 = new QLabel(groupBox_5);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 169, 101, 41));
        label_26 = new QLabel(groupBox_5);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(10, 49, 101, 41));
        label_27 = new QLabel(groupBox_5);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(10, 79, 101, 41));
        label_28 = new QLabel(groupBox_5);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(10, 140, 101, 41));
        prenom_val = new QTextBrowser(groupBox_5);
        prenom_val->setObjectName(QStringLiteral("prenom_val"));
        prenom_val->setGeometry(QRect(80, 90, 131, 31));
        tel_val = new QTextBrowser(groupBox_5);
        tel_val->setObjectName(QStringLiteral("tel_val"));
        tel_val->setGeometry(QRect(80, 120, 131, 31));
        nom_val = new QTextBrowser(groupBox_5);
        nom_val->setObjectName(QStringLiteral("nom_val"));
        nom_val->setGeometry(QRect(80, 60, 131, 31));
        salaire_val = new QTextBrowser(groupBox_5);
        salaire_val->setObjectName(QStringLiteral("salaire_val"));
        salaire_val->setGeometry(QRect(80, 180, 131, 31));
        email_val = new QTextBrowser(groupBox_5);
        email_val->setObjectName(QStringLiteral("email_val"));
        email_val->setGeometry(QRect(80, 150, 131, 31));
        supprime_ens_btn = new QPushButton(groupBox_5);
        supprime_ens_btn->setObjectName(QStringLiteral("supprime_ens_btn"));
        supprime_ens_btn->setGeometry(QRect(120, 220, 75, 23));
        tableView_ens = new QTableView(tab_3);
        tableView_ens->setObjectName(QStringLiteral("tableView_ens"));
        tableView_ens->setGeometry(QRect(40, 290, 661, 221));
        groupBox_6 = new QGroupBox(tab_3);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(60, 20, 241, 261));
        comboBox_ens_modif = new QComboBox(groupBox_6);
        comboBox_ens_modif->setObjectName(QStringLiteral("comboBox_ens_modif"));
        comboBox_ens_modif->setGeometry(QRect(80, 30, 141, 22));
        label_14 = new QLabel(groupBox_6);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 31, 61, 21));
        label_19 = new QLabel(groupBox_6);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 118, 101, 41));
        label_20 = new QLabel(groupBox_6);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 179, 101, 41));
        label_21 = new QLabel(groupBox_6);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(10, 59, 101, 41));
        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(10, 89, 101, 41));
        label_23 = new QLabel(groupBox_6);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(10, 150, 101, 41));
        salaire_modif = new QLineEdit(groupBox_6);
        salaire_modif->setObjectName(QStringLiteral("salaire_modif"));
        salaire_modif->setGeometry(QRect(70, 190, 161, 31));
        prenom_modif = new QLineEdit(groupBox_6);
        prenom_modif->setObjectName(QStringLiteral("prenom_modif"));
        prenom_modif->setGeometry(QRect(70, 100, 161, 31));
        nom_modif = new QLineEdit(groupBox_6);
        nom_modif->setObjectName(QStringLiteral("nom_modif"));
        nom_modif->setGeometry(QRect(70, 70, 161, 31));
        email_modif = new QLineEdit(groupBox_6);
        email_modif->setObjectName(QStringLiteral("email_modif"));
        email_modif->setGeometry(QRect(70, 160, 161, 31));
        tel_modif = new QLineEdit(groupBox_6);
        tel_modif->setObjectName(QStringLiteral("tel_modif"));
        tel_modif->setGeometry(QRect(70, 130, 161, 31));
        modifer_ens_btn = new QPushButton(groupBox_6);
        modifer_ens_btn->setObjectName(QStringLiteral("modifer_ens_btn"));
        modifer_ens_btn->setGeometry(QRect(100, 230, 75, 23));
        tabWidget->addTab(tab_3, QString());

        retranslateUi(admininterface);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(admininterface);
    } // setupUi

    void retranslateUi(QDialog *admininterface)
    {
        admininterface->setWindowTitle(QApplication::translate("admininterface", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("admininterface", "Ajouter Admin", Q_NULLPTR));
        label->setText(QApplication::translate("admininterface", "Nom utilisateur :", Q_NULLPTR));
        label_2->setText(QApplication::translate("admininterface", "Mot de passe :", Q_NULLPTR));
        label_3->setText(QApplication::translate("admininterface", "Role :", Q_NULLPTR));
        btn_ajouter_admin->setText(QApplication::translate("admininterface", "Ajouter", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("admininterface", "Ajouter Enseignant", Q_NULLPTR));
        btn_ajouter_ens->setText(QApplication::translate("admininterface", "Ajouter", Q_NULLPTR));
        label_4->setText(QApplication::translate("admininterface", "Nom :", Q_NULLPTR));
        label_5->setText(QApplication::translate("admininterface", "Prenom :", Q_NULLPTR));
        label_6->setText(QApplication::translate("admininterface", "Tel :", Q_NULLPTR));
        label_7->setText(QApplication::translate("admininterface", "Email :", Q_NULLPTR));
        label_8->setText(QApplication::translate("admininterface", "Salaire :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("admininterface", "Ajouter Admin ou Enseignant", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("admininterface", "Modifier Admin", Q_NULLPTR));
        label_11->setText(QApplication::translate("admininterface", "Nom utilisateur :", Q_NULLPTR));
        label_9->setText(QApplication::translate("admininterface", "Mot de passe :", Q_NULLPTR));
        label_10->setText(QApplication::translate("admininterface", "Role :", Q_NULLPTR));
        label_12->setText(QApplication::translate("admininterface", "ID", Q_NULLPTR));
        modifier_admin->setText(QApplication::translate("admininterface", "Modifier", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("admininterface", "Supprimer Admin", Q_NULLPTR));
        label_13->setText(QApplication::translate("admininterface", "ID", Q_NULLPTR));
        label_16->setText(QApplication::translate("admininterface", "Nom utilisateur :", Q_NULLPTR));
        label_17->setText(QApplication::translate("admininterface", "Mot de passe :", Q_NULLPTR));
        label_18->setText(QApplication::translate("admininterface", "Role :", Q_NULLPTR));
        suprimer_admin->setText(QApplication::translate("admininterface", "Supprimer", Q_NULLPTR));
        label_29->setText(QApplication::translate("admininterface", "Recherche :", Q_NULLPTR));
        label_30->setText(QApplication::translate("admininterface", "Tri :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("admininterface", "Gerer  Admin", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("admininterface", "Supprimer Enseignant", Q_NULLPTR));
        label_15->setText(QApplication::translate("admininterface", "ID", Q_NULLPTR));
        label_24->setText(QApplication::translate("admininterface", "Tel :", Q_NULLPTR));
        label_25->setText(QApplication::translate("admininterface", "Salaire :", Q_NULLPTR));
        label_26->setText(QApplication::translate("admininterface", "Nom :", Q_NULLPTR));
        label_27->setText(QApplication::translate("admininterface", "Prenom :", Q_NULLPTR));
        label_28->setText(QApplication::translate("admininterface", "Email :", Q_NULLPTR));
        supprime_ens_btn->setText(QApplication::translate("admininterface", "Supprimer", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("admininterface", "Modifier Enseignant", Q_NULLPTR));
        label_14->setText(QApplication::translate("admininterface", "ID", Q_NULLPTR));
        label_19->setText(QApplication::translate("admininterface", "Tel :", Q_NULLPTR));
        label_20->setText(QApplication::translate("admininterface", "Salaire :", Q_NULLPTR));
        label_21->setText(QApplication::translate("admininterface", "Nom :", Q_NULLPTR));
        label_22->setText(QApplication::translate("admininterface", "Prenom :", Q_NULLPTR));
        label_23->setText(QApplication::translate("admininterface", "Email :", Q_NULLPTR));
        modifer_ens_btn->setText(QApplication::translate("admininterface", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("admininterface", "Gerer Enseignant", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class admininterface: public Ui_admininterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMININTERFACE_H
