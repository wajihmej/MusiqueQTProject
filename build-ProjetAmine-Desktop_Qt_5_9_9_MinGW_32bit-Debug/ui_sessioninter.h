/********************************************************************************
** Form generated from reading UI file 'sessioninter.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SESSIONINTER_H
#define UI_SESSIONINTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sessioninter
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QTextEdit *type;
    QLabel *label_13;
    QLabel *label_12;
    QLabel *label_15;
    QLabel *label_14;
    QTextEdit *Nom;
    QTextEdit *prenom;
    QPushButton *AjouterBouton;
    QDateTimeEdit *datedebut;
    QLabel *label_16;
    QDateTimeEdit *datefin;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *SupprimerBouton;
    QLabel *label_27;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QTextBrowser *Nomval;
    QTextBrowser *Prenomval;
    QTextBrowser *Typeval;
    QTextBrowser *Datedebval;
    QLabel *label_33;
    QTextBrowser *datefinval;
    QTableView *tablemodifier;
    QGroupBox *groupBox_3;
    QComboBox *comboBox_modif;
    QLabel *label_2;
    QPushButton *ModifierBouton;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QTextEdit *Type_modif;
    QTextEdit *Nom_modif;
    QTextEdit *Prenom_modif;
    QLabel *label_32;
    QDateTimeEdit *datedebut_modif;
    QDateTimeEdit *datefin_modif;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *recherche;
    QComboBox *comboBox_Tri;
    QPushButton *PDF;

    void setupUi(QDialog *sessioninter)
    {
        if (sessioninter->objectName().isEmpty())
            sessioninter->setObjectName(QStringLiteral("sessioninter"));
        sessioninter->resize(1116, 762);
        tabWidget = new QTabWidget(sessioninter);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(40, 30, 941, 661));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(260, 140, 351, 321));
        type = new QTextEdit(groupBox);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(105, 110, 211, 31));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(5, 30, 91, 31));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(5, 150, 91, 31));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(5, 110, 91, 31));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(5, 70, 91, 31));
        Nom = new QTextEdit(groupBox);
        Nom->setObjectName(QStringLiteral("Nom"));
        Nom->setGeometry(QRect(105, 30, 211, 31));
        prenom = new QTextEdit(groupBox);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setGeometry(QRect(105, 70, 211, 31));
        AjouterBouton = new QPushButton(groupBox);
        AjouterBouton->setObjectName(QStringLiteral("AjouterBouton"));
        AjouterBouton->setGeometry(QRect(150, 280, 75, 23));
        datedebut = new QDateTimeEdit(groupBox);
        datedebut->setObjectName(QStringLiteral("datedebut"));
        datedebut->setGeometry(QRect(110, 161, 201, 21));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 200, 91, 31));
        datefin = new QDateTimeEdit(groupBox);
        datefin->setObjectName(QStringLiteral("datefin"));
        datefin->setGeometry(QRect(110, 200, 201, 22));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(520, 20, 381, 291));
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(160, 17, 121, 22));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 12, 81, 31));
        SupprimerBouton = new QPushButton(groupBox_2);
        SupprimerBouton->setObjectName(QStringLiteral("SupprimerBouton"));
        SupprimerBouton->setGeometry(QRect(280, 260, 75, 23));
        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(10, 130, 91, 31));
        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 50, 91, 31));
        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 90, 91, 31));
        label_26 = new QLabel(groupBox_2);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(10, 170, 91, 31));
        Nomval = new QTextBrowser(groupBox_2);
        Nomval->setObjectName(QStringLiteral("Nomval"));
        Nomval->setGeometry(QRect(110, 50, 256, 31));
        Prenomval = new QTextBrowser(groupBox_2);
        Prenomval->setObjectName(QStringLiteral("Prenomval"));
        Prenomval->setGeometry(QRect(110, 90, 256, 31));
        Typeval = new QTextBrowser(groupBox_2);
        Typeval->setObjectName(QStringLiteral("Typeval"));
        Typeval->setGeometry(QRect(110, 130, 256, 31));
        Datedebval = new QTextBrowser(groupBox_2);
        Datedebval->setObjectName(QStringLiteral("Datedebval"));
        Datedebval->setGeometry(QRect(110, 170, 256, 31));
        label_33 = new QLabel(groupBox_2);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(10, 220, 91, 31));
        datefinval = new QTextBrowser(groupBox_2);
        datefinval->setObjectName(QStringLiteral("datefinval"));
        datefinval->setGeometry(QRect(110, 210, 256, 31));
        tablemodifier = new QTableView(tab_2);
        tablemodifier->setObjectName(QStringLiteral("tablemodifier"));
        tablemodifier->setGeometry(QRect(10, 360, 921, 251));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(50, 10, 381, 301));
        comboBox_modif = new QComboBox(groupBox_3);
        comboBox_modif->setObjectName(QStringLiteral("comboBox_modif"));
        comboBox_modif->setGeometry(QRect(160, 17, 121, 22));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 12, 81, 31));
        ModifierBouton = new QPushButton(groupBox_3);
        ModifierBouton->setObjectName(QStringLiteral("ModifierBouton"));
        ModifierBouton->setGeometry(QRect(280, 270, 75, 23));
        label_28 = new QLabel(groupBox_3);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(10, 130, 91, 31));
        label_29 = new QLabel(groupBox_3);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(10, 50, 91, 31));
        label_30 = new QLabel(groupBox_3);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(10, 90, 91, 31));
        label_31 = new QLabel(groupBox_3);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(10, 170, 91, 31));
        Type_modif = new QTextEdit(groupBox_3);
        Type_modif->setObjectName(QStringLiteral("Type_modif"));
        Type_modif->setGeometry(QRect(140, 130, 211, 31));
        Nom_modif = new QTextEdit(groupBox_3);
        Nom_modif->setObjectName(QStringLiteral("Nom_modif"));
        Nom_modif->setGeometry(QRect(140, 50, 211, 31));
        Prenom_modif = new QTextEdit(groupBox_3);
        Prenom_modif->setObjectName(QStringLiteral("Prenom_modif"));
        Prenom_modif->setGeometry(QRect(140, 90, 211, 31));
        label_32 = new QLabel(groupBox_3);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(10, 220, 91, 31));
        datedebut_modif = new QDateTimeEdit(groupBox_3);
        datedebut_modif->setObjectName(QStringLiteral("datedebut_modif"));
        datedebut_modif->setGeometry(QRect(140, 171, 211, 31));
        datefin_modif = new QDateTimeEdit(groupBox_3);
        datefin_modif->setObjectName(QStringLiteral("datefin_modif"));
        datefin_modif->setGeometry(QRect(140, 220, 211, 31));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(226, 318, 91, 31));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(710, 315, 91, 31));
        recherche = new QLineEdit(tab_2);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setGeometry(QRect(300, 317, 241, 31));
        comboBox_Tri = new QComboBox(tab_2);
        comboBox_Tri->setObjectName(QStringLiteral("comboBox_Tri"));
        comboBox_Tri->setGeometry(QRect(770, 320, 141, 22));
        PDF = new QPushButton(tab_2);
        PDF->setObjectName(QStringLiteral("PDF"));
        PDF->setGeometry(QRect(60, 320, 75, 23));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(sessioninter);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(sessioninter);
    } // setupUi

    void retranslateUi(QDialog *sessioninter)
    {
        sessioninter->setWindowTitle(QApplication::translate("sessioninter", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("sessioninter", "Ajouter Session", Q_NULLPTR));
        label_13->setText(QApplication::translate("sessioninter", "Nom :", Q_NULLPTR));
        label_12->setText(QApplication::translate("sessioninter", "Date Debut :", Q_NULLPTR));
        label_15->setText(QApplication::translate("sessioninter", "Type :", Q_NULLPTR));
        label_14->setText(QApplication::translate("sessioninter", "Prenom :", Q_NULLPTR));
        AjouterBouton->setText(QApplication::translate("sessioninter", "Ajouter", Q_NULLPTR));
        label_16->setText(QApplication::translate("sessioninter", "Date Fin :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("sessioninter", "Ajouter Session", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("sessioninter", "Supprimer Session", Q_NULLPTR));
        label->setText(QApplication::translate("sessioninter", "ID Session", Q_NULLPTR));
        SupprimerBouton->setText(QApplication::translate("sessioninter", "Supprimer", Q_NULLPTR));
        label_27->setText(QApplication::translate("sessioninter", "Type :", Q_NULLPTR));
        label_24->setText(QApplication::translate("sessioninter", "Nom :", Q_NULLPTR));
        label_25->setText(QApplication::translate("sessioninter", "Prenom :", Q_NULLPTR));
        label_26->setText(QApplication::translate("sessioninter", "Date debut :", Q_NULLPTR));
        label_33->setText(QApplication::translate("sessioninter", "Date  fin:", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("sessioninter", "Supprimer Session", Q_NULLPTR));
        label_2->setText(QApplication::translate("sessioninter", "ID Session", Q_NULLPTR));
        ModifierBouton->setText(QApplication::translate("sessioninter", "Modifier", Q_NULLPTR));
        label_28->setText(QApplication::translate("sessioninter", "Type :", Q_NULLPTR));
        label_29->setText(QApplication::translate("sessioninter", "Nom :", Q_NULLPTR));
        label_30->setText(QApplication::translate("sessioninter", "Prenom :", Q_NULLPTR));
        label_31->setText(QApplication::translate("sessioninter", "Date debut :", Q_NULLPTR));
        label_32->setText(QApplication::translate("sessioninter", "Date  fin:", Q_NULLPTR));
        label_3->setText(QApplication::translate("sessioninter", "Recherche :", Q_NULLPTR));
        label_4->setText(QApplication::translate("sessioninter", "Trier par :", Q_NULLPTR));
        PDF->setText(QApplication::translate("sessioninter", "Imprimer PDF", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("sessioninter", "Gerer Session", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sessioninter: public Ui_sessioninter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SESSIONINTER_H
