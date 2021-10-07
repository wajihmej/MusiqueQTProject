/********************************************************************************
** Form generated from reading UI file 'evenementinter.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENEMENTINTER_H
#define UI_EVENEMENTINTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
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

class Ui_EvenementInter
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QDateEdit *dateEdit;
    QTextEdit *Emplacement;
    QLabel *label_13;
    QLabel *label_12;
    QLabel *label_15;
    QLabel *label_14;
    QTextEdit *Nom;
    QTextEdit *Description;
    QPushButton *AjouterBouton;
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
    QTextBrowser *Descriptionval;
    QTextBrowser *Emplacementval;
    QTextBrowser *Dateeventval;
    QTableView *tablemodifier;
    QGroupBox *groupBox_3;
    QComboBox *comboBox_modif;
    QLabel *label_2;
    QPushButton *ModifierBouton;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QTextEdit *Emplacement_modif;
    QTextEdit *Nom_modif;
    QTextEdit *Description_modif;
    QDateEdit *dateEdit_modif;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *recherche;
    QComboBox *comboBox_Tri;
    QLabel *label_9;
    QLineEdit *recherche_emp;
    QLabel *label_10;
    QLineEdit *recherche_desc;

    void setupUi(QDialog *EvenementInter)
    {
        if (EvenementInter->objectName().isEmpty())
            EvenementInter->setObjectName(QStringLiteral("EvenementInter"));
        EvenementInter->resize(1011, 677);
        tabWidget = new QTabWidget(EvenementInter);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(60, 50, 941, 601));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(260, 140, 431, 301));
        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(105, 150, 211, 31));
        Emplacement = new QTextEdit(groupBox);
        Emplacement->setObjectName(QStringLiteral("Emplacement"));
        Emplacement->setGeometry(QRect(105, 110, 211, 31));
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
        Description = new QTextEdit(groupBox);
        Description->setObjectName(QStringLiteral("Description"));
        Description->setGeometry(QRect(105, 70, 211, 31));
        AjouterBouton = new QPushButton(groupBox);
        AjouterBouton->setObjectName(QStringLiteral("AjouterBouton"));
        AjouterBouton->setGeometry(QRect(120, 200, 75, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(520, 20, 381, 241));
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(160, 17, 121, 22));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 12, 81, 31));
        SupprimerBouton = new QPushButton(groupBox_2);
        SupprimerBouton->setObjectName(QStringLiteral("SupprimerBouton"));
        SupprimerBouton->setGeometry(QRect(280, 210, 75, 23));
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
        Descriptionval = new QTextBrowser(groupBox_2);
        Descriptionval->setObjectName(QStringLiteral("Descriptionval"));
        Descriptionval->setGeometry(QRect(110, 90, 256, 31));
        Emplacementval = new QTextBrowser(groupBox_2);
        Emplacementval->setObjectName(QStringLiteral("Emplacementval"));
        Emplacementval->setGeometry(QRect(110, 130, 256, 31));
        Dateeventval = new QTextBrowser(groupBox_2);
        Dateeventval->setObjectName(QStringLiteral("Dateeventval"));
        Dateeventval->setGeometry(QRect(110, 170, 256, 31));
        tablemodifier = new QTableView(tab_2);
        tablemodifier->setObjectName(QStringLiteral("tablemodifier"));
        tablemodifier->setGeometry(QRect(10, 320, 921, 251));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(50, 10, 381, 241));
        comboBox_modif = new QComboBox(groupBox_3);
        comboBox_modif->setObjectName(QStringLiteral("comboBox_modif"));
        comboBox_modif->setGeometry(QRect(160, 17, 121, 22));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 12, 81, 31));
        ModifierBouton = new QPushButton(groupBox_3);
        ModifierBouton->setObjectName(QStringLiteral("ModifierBouton"));
        ModifierBouton->setGeometry(QRect(280, 210, 75, 23));
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
        Emplacement_modif = new QTextEdit(groupBox_3);
        Emplacement_modif->setObjectName(QStringLiteral("Emplacement_modif"));
        Emplacement_modif->setGeometry(QRect(140, 130, 211, 31));
        Nom_modif = new QTextEdit(groupBox_3);
        Nom_modif->setObjectName(QStringLiteral("Nom_modif"));
        Nom_modif->setGeometry(QRect(140, 50, 211, 31));
        Description_modif = new QTextEdit(groupBox_3);
        Description_modif->setObjectName(QStringLiteral("Description_modif"));
        Description_modif->setGeometry(QRect(140, 90, 211, 31));
        dateEdit_modif = new QDateEdit(groupBox_3);
        dateEdit_modif->setObjectName(QStringLiteral("dateEdit_modif"));
        dateEdit_modif->setGeometry(QRect(140, 170, 211, 31));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 270, 91, 31));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(710, 270, 91, 31));
        recherche = new QLineEdit(tab_2);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setGeometry(QRect(130, 272, 61, 31));
        comboBox_Tri = new QComboBox(tab_2);
        comboBox_Tri->setObjectName(QStringLiteral("comboBox_Tri"));
        comboBox_Tri->setGeometry(QRect(770, 275, 141, 22));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(430, 270, 131, 31));
        recherche_emp = new QLineEdit(tab_2);
        recherche_emp->setObjectName(QStringLiteral("recherche_emp"));
        recherche_emp->setGeometry(QRect(564, 270, 111, 31));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(200, 270, 121, 31));
        recherche_desc = new QLineEdit(tab_2);
        recherche_desc->setObjectName(QStringLiteral("recherche_desc"));
        recherche_desc->setGeometry(QRect(320, 270, 101, 31));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(EvenementInter);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(EvenementInter);
    } // setupUi

    void retranslateUi(QDialog *EvenementInter)
    {
        EvenementInter->setWindowTitle(QApplication::translate("EvenementInter", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("EvenementInter", "Ajouter Evenement", Q_NULLPTR));
        label_13->setText(QApplication::translate("EvenementInter", "Nom :", Q_NULLPTR));
        label_12->setText(QApplication::translate("EvenementInter", "Date Evenement :", Q_NULLPTR));
        label_15->setText(QApplication::translate("EvenementInter", "Emplacement :", Q_NULLPTR));
        label_14->setText(QApplication::translate("EvenementInter", "Description :", Q_NULLPTR));
        AjouterBouton->setText(QApplication::translate("EvenementInter", "Ajouter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("EvenementInter", "Ajouter Evenment", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("EvenementInter", "Supprimer Evenement", Q_NULLPTR));
        label->setText(QApplication::translate("EvenementInter", "ID evennement", Q_NULLPTR));
        SupprimerBouton->setText(QApplication::translate("EvenementInter", "Supprimer", Q_NULLPTR));
        label_27->setText(QApplication::translate("EvenementInter", "Emplacement :", Q_NULLPTR));
        label_24->setText(QApplication::translate("EvenementInter", "Nom :", Q_NULLPTR));
        label_25->setText(QApplication::translate("EvenementInter", "Description :", Q_NULLPTR));
        label_26->setText(QApplication::translate("EvenementInter", "Date Evenement :", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("EvenementInter", "Supprimer Evenement", Q_NULLPTR));
        label_2->setText(QApplication::translate("EvenementInter", "ID evennement", Q_NULLPTR));
        ModifierBouton->setText(QApplication::translate("EvenementInter", "Modifier", Q_NULLPTR));
        label_28->setText(QApplication::translate("EvenementInter", "Emplacement :", Q_NULLPTR));
        label_29->setText(QApplication::translate("EvenementInter", "Nom :", Q_NULLPTR));
        label_30->setText(QApplication::translate("EvenementInter", "Description :", Q_NULLPTR));
        label_31->setText(QApplication::translate("EvenementInter", "Date Evenement :", Q_NULLPTR));
        label_3->setText(QApplication::translate("EvenementInter", "Recherche Nom :", Q_NULLPTR));
        label_4->setText(QApplication::translate("EvenementInter", "Trier par :", Q_NULLPTR));
        label_9->setText(QApplication::translate("EvenementInter", "Recherche Emplacement :", Q_NULLPTR));
        label_10->setText(QApplication::translate("EvenementInter", "Recherche description :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("EvenementInter", "Gerer Evenment", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EvenementInter: public Ui_EvenementInter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENEMENTINTER_H
