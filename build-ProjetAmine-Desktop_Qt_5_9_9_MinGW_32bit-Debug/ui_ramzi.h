/********************************************************************************
** Form generated from reading UI file 'ramzi.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAMZI_H
#define UI_RAMZI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ramzi
{
public:
    QWidget *centralwidget;
    QWidget *central;
    QComboBox *comboBox_8;
    QStackedWidget *stackedWidget;
    QWidget *stackedWidgetPage1;
    QTabWidget *tabWidget;
    QWidget *tab_8;
    QPushButton *SupprimerSc;
    QLabel *reference_sup_6;
    QLabel *label_63;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QDateEdit *dateEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *ajouterSC;
    QComboBox *comboBox_4;
    QWidget *tab_9;
    QComboBox *comboBox;
    QDateEdit *dateEdit_2;
    QLineEdit *lineEdit_11;
    QPushButton *ModifieSC;
    QWidget *tab;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QTableView *tabSeance;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_3;
    QWidget *stackedWidgetPage2;
    QTabWidget *tabWidget_2;
    QWidget *tab_15;
    QLabel *label_64;
    QPushButton *supprimerC_2;
    QLabel *reference_sup_7;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *AjouterC;
    QComboBox *comboBox_3;
    QWidget *tab_16;
    QLabel *label_9;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLabel *label_8;
    QLabel *label_15;
    QPushButton *ModifierC;
    QTableView *tabcours;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QComboBox *comboBox_5;
    QWidget *page;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Ramzi)
    {
        if (Ramzi->objectName().isEmpty())
            Ramzi->setObjectName(QStringLiteral("Ramzi"));
        Ramzi->resize(1187, 600);
        centralwidget = new QWidget(Ramzi);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        central = new QWidget(centralwidget);
        central->setObjectName(QStringLiteral("central"));
        central->setGeometry(QRect(10, 0, 1200, 601));
        comboBox_8 = new QComboBox(central);
        QIcon icon;
        icon.addFile(QStringLiteral(":/bakground/patienticon.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_8->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/bakground/rendez_vousicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_8->addItem(icon1, QString());
        comboBox_8->addItem(QString());
        comboBox_8->setObjectName(QStringLiteral("comboBox_8"));
        comboBox_8->setGeometry(QRect(23, 10, 301, 38));
        comboBox_8->setStyleSheet(QLatin1String("color: rgb(85, 85, 255) ;\n"
"background-color: rgb(49, 49, 49);"));
        stackedWidget = new QStackedWidget(central);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(-10, 67, 1191, 461));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName(QStringLiteral("stackedWidgetPage1"));
        tabWidget = new QTabWidget(stackedWidgetPage1);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 30, 531, 421));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QStringLiteral(""));
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        SupprimerSc = new QPushButton(tab_8);
        SupprimerSc->setObjectName(QStringLiteral("SupprimerSc"));
        SupprimerSc->setGeometry(QRect(179, 360, 201, 28));
        SupprimerSc->setFont(font);
        reference_sup_6 = new QLabel(tab_8);
        reference_sup_6->setObjectName(QStringLiteral("reference_sup_6"));
        reference_sup_6->setGeometry(QRect(19, 330, 141, 20));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        reference_sup_6->setFont(font1);
        label_63 = new QLabel(tab_8);
        label_63->setObjectName(QStringLiteral("label_63"));
        label_63->setGeometry(QRect(20, 300, 321, 16));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        label_63->setFont(font2);
        lineEdit_9 = new QLineEdit(tab_8);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(100, 70, 261, 20));
        lineEdit_10 = new QLineEdit(tab_8);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(100, 210, 261, 20));
        dateEdit = new QDateEdit(tab_8);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(100, 140, 251, 22));
        label = new QLabel(tab_8);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 70, 47, 14));
        label_2 = new QLabel(tab_8);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 140, 47, 14));
        label_3 = new QLabel(tab_8);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 220, 47, 14));
        ajouterSC = new QPushButton(tab_8);
        ajouterSC->setObjectName(QStringLiteral("ajouterSC"));
        ajouterSC->setGeometry(QRect(240, 250, 121, 23));
        comboBox_4 = new QComboBox(tab_8);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(180, 330, 201, 22));
        tabWidget->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        comboBox = new QComboBox(tab_9);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(80, 60, 281, 22));
        dateEdit_2 = new QDateEdit(tab_9);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(80, 170, 281, 22));
        lineEdit_11 = new QLineEdit(tab_9);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(80, 270, 281, 20));
        ModifieSC = new QPushButton(tab_9);
        ModifieSC->setObjectName(QStringLiteral("ModifieSC"));
        ModifieSC->setGeometry(QRect(290, 340, 75, 23));
        tabWidget->addTab(tab_9, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        lineEdit_5 = new QLineEdit(tab);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(100, 50, 371, 20));
        lineEdit_6 = new QLineEdit(tab);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(100, 80, 211, 20));
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(100, 110, 371, 221));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 350, 75, 23));
        label_10 = new QLabel(tab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 50, 47, 14));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 80, 47, 14));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 110, 47, 14));
        tabWidget->addTab(tab, QString());
        tabSeance = new QTableView(stackedWidgetPage1);
        tabSeance->setObjectName(QStringLiteral("tabSeance"));
        tabSeance->setGeometry(QRect(560, 70, 611, 361));
        lineEdit_4 = new QLineEdit(stackedWidgetPage1);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(560, 40, 301, 20));
        pushButton_3 = new QPushButton(stackedWidgetPage1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1090, 40, 75, 23));
        stackedWidget->addWidget(stackedWidgetPage1);
        stackedWidgetPage2 = new QWidget();
        stackedWidgetPage2->setObjectName(QStringLiteral("stackedWidgetPage2"));
        tabWidget_2 = new QTabWidget(stackedWidgetPage2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 0, 581, 511));
        tabWidget_2->setFont(font);
        tab_15 = new QWidget();
        tab_15->setObjectName(QStringLiteral("tab_15"));
        label_64 = new QLabel(tab_15);
        label_64->setObjectName(QStringLiteral("label_64"));
        label_64->setGeometry(QRect(31, 340, 321, 16));
        label_64->setFont(font2);
        supprimerC_2 = new QPushButton(tab_15);
        supprimerC_2->setObjectName(QStringLiteral("supprimerC_2"));
        supprimerC_2->setGeometry(QRect(190, 390, 201, 28));
        supprimerC_2->setFont(font);
        reference_sup_7 = new QLabel(tab_15);
        reference_sup_7->setObjectName(QStringLiteral("reference_sup_7"));
        reference_sup_7->setGeometry(QRect(30, 370, 141, 20));
        reference_sup_7->setFont(font1);
        lineEdit = new QLineEdit(tab_15);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(170, 100, 221, 20));
        lineEdit_2 = new QLineEdit(tab_15);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 160, 221, 20));
        lineEdit_3 = new QLineEdit(tab_15);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(170, 220, 221, 20));
        label_5 = new QLabel(tab_15);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 100, 47, 14));
        label_6 = new QLabel(tab_15);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 170, 47, 14));
        label_7 = new QLabel(tab_15);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 230, 47, 14));
        AjouterC = new QPushButton(tab_15);
        AjouterC->setObjectName(QStringLiteral("AjouterC"));
        AjouterC->setGeometry(QRect(260, 290, 131, 23));
        comboBox_3 = new QComboBox(tab_15);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(190, 360, 201, 22));
        tabWidget_2->addTab(tab_15, QString());
        tab_16 = new QWidget();
        tab_16->setObjectName(QStringLiteral("tab_16"));
        label_9 = new QLabel(tab_16);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 60, 61, 16));
        comboBox_2 = new QComboBox(tab_16);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(110, 60, 311, 22));
        lineEdit_7 = new QLineEdit(tab_16);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(110, 180, 311, 20));
        lineEdit_8 = new QLineEdit(tab_16);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(110, 290, 311, 20));
        label_8 = new QLabel(tab_16);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 190, 47, 14));
        label_15 = new QLabel(tab_16);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 300, 47, 14));
        ModifierC = new QPushButton(tab_16);
        ModifierC->setObjectName(QStringLiteral("ModifierC"));
        ModifierC->setGeometry(QRect(304, 360, 111, 23));
        tabWidget_2->addTab(tab_16, QString());
        tabcours = new QTableView(stackedWidgetPage2);
        tabcours->setObjectName(QStringLiteral("tabcours"));
        tabcours->setGeometry(QRect(610, 60, 581, 401));
        tabcours->setStyleSheet(QStringLiteral(""));
        checkBox = new QCheckBox(stackedWidgetPage2);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(970, 30, 70, 18));
        pushButton = new QPushButton(stackedWidgetPage2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1070, 22, 75, 31));
        comboBox_5 = new QComboBox(stackedWidgetPage2);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(811, 30, 131, 22));
        stackedWidget->addWidget(stackedWidgetPage2);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayoutWidget = new QWidget(page);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(270, 100, 681, 331));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(page);
        Ramzi->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Ramzi);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1187, 22));
        Ramzi->setMenuBar(menubar);
        statusbar = new QStatusBar(Ramzi);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Ramzi->setStatusBar(statusbar);

        retranslateUi(Ramzi);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Ramzi);
    } // setupUi

    void retranslateUi(QMainWindow *Ramzi)
    {
        Ramzi->setWindowTitle(QApplication::translate("Ramzi", "MainWindow", Q_NULLPTR));
        comboBox_8->setItemText(0, QApplication::translate("Ramzi", "Seance", Q_NULLPTR));
        comboBox_8->setItemText(1, QApplication::translate("Ramzi", "Cours", Q_NULLPTR));
        comboBox_8->setItemText(2, QApplication::translate("Ramzi", "Statistique", Q_NULLPTR));

        SupprimerSc->setText(QApplication::translate("Ramzi", "supprimer", Q_NULLPTR));
        reference_sup_6->setText(QApplication::translate("Ramzi", "matricule", Q_NULLPTR));
        label_63->setText(QApplication::translate("Ramzi", "Saisir l'id de seance a supprimer :", Q_NULLPTR));
        label->setText(QApplication::translate("Ramzi", "ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("Ramzi", "Date", Q_NULLPTR));
        label_3->setText(QApplication::translate("Ramzi", "Duree", Q_NULLPTR));
        ajouterSC->setText(QApplication::translate("Ramzi", "Ajouter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("Ramzi", "Ajouter Seance", Q_NULLPTR));
        ModifieSC->setText(QApplication::translate("Ramzi", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("Ramzi", "Modifier Seance", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Ramzi", "envoyer", Q_NULLPTR));
        label_10->setText(QApplication::translate("Ramzi", "Mail", Q_NULLPTR));
        label_11->setText(QApplication::translate("Ramzi", "Sujet", Q_NULLPTR));
        label_12->setText(QApplication::translate("Ramzi", "Message", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Ramzi", "contact Etudiant ", Q_NULLPTR));
        lineEdit_4->setText(QString());
        lineEdit_4->setPlaceholderText(QApplication::translate("Ramzi", "recherhe par date", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Ramzi", "PDF", Q_NULLPTR));
        label_64->setText(QApplication::translate("Ramzi", "Saisir l'id du  cours a supprimer :", Q_NULLPTR));
        supprimerC_2->setText(QApplication::translate("Ramzi", "supprimer", Q_NULLPTR));
        reference_sup_7->setText(QApplication::translate("Ramzi", "id", Q_NULLPTR));
        label_5->setText(QApplication::translate("Ramzi", "ID", Q_NULLPTR));
        label_6->setText(QApplication::translate("Ramzi", "Nom", Q_NULLPTR));
        label_7->setText(QApplication::translate("Ramzi", "Prenom", Q_NULLPTR));
        AjouterC->setText(QApplication::translate("Ramzi", "Ajouter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_15), QApplication::translate("Ramzi", "ajouter Cours", Q_NULLPTR));
        label_9->setText(QApplication::translate("Ramzi", "id", Q_NULLPTR));
        label_8->setText(QApplication::translate("Ramzi", "Nom", Q_NULLPTR));
        label_15->setText(QApplication::translate("Ramzi", "Prenom", Q_NULLPTR));
        ModifierC->setText(QApplication::translate("Ramzi", "Modifier", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_16), QApplication::translate("Ramzi", "Modifier Cours", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Ramzi", "DESC", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Ramzi", "TRIE", Q_NULLPTR));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("Ramzi", "id", Q_NULLPTR)
         << QApplication::translate("Ramzi", "nom", Q_NULLPTR)
         << QApplication::translate("Ramzi", "prenom", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class Ramzi: public Ui_Ramzi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAMZI_H
