/********************************************************************************
** Form generated from reading UI file 'baha.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAHA_H
#define UI_BAHA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_baha
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTableView *tableView_2;
    QFrame *frame_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *le_id_groupe;
    QLineEdit *le_niveau_groupe;
    QLineEdit *le_type_groupe;
    QPushButton *pushButton_2;
    QPushButton *pushButton_modifiergroupe;
    QPushButton *pushButton_4_supgroupe;
    QPushButton *pushButton_16;
    QLineEdit *recherche;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QLabel *label_11;
    QWidget *page_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QWidget *page_2;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QWidget *page_4;
    QTableView *tableView;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *le_id;
    QLineEdit *le_nom;
    QLineEdit *le_prenom;
    QLineEdit *le_tel;
    QLineEdit *le_email;
    QPushButton *on_pb_ajouter;
    QPushButton *pushButton;
    QPushButton *pushButtonsupp;
    QLineEdit *le_id_supp;
    QLabel *label_6;
    QPushButton *pushButton_10;
    QFrame *frame_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QLineEdit *labelrecherche;
    QPushButton *pushButton_5;
    QPushButton *pushButton_17;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *baha)
    {
        if (baha->objectName().isEmpty())
            baha->setObjectName(QStringLiteral("baha"));
        baha->resize(1046, 600);
        centralwidget = new QWidget(baha);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(110, 100, 861, 421));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        tableView_2 = new QTableView(page);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(90, 10, 391, 281));
        frame_2 = new QFrame(page);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(520, 40, 311, 371));
        frame_2->setStyleSheet(QLatin1String("*{\n"
"	font-family:century gothic;\n"
"	color:white;\n"
"	font-size:17px;\n"
"}\n"
"\n"
"QFrame\n"
"{\n"
"	background:#555;\n"
"}\n"
"\n"
"/*QToolButton\n"
"{\n"
"	background:red;\n"
"	border-radius:60px;\n"
"}*/\n"
"\n"
"QPushButton\n"
"{\n"
"	color:white;\n"
"	background:#8B2C3D;\n"
"	border-radius:15px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	color:#8B2C3D;\n"
"	border-radius:15px;\n"
"	background:#fff;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"	background:transparent;\n"
"	border:none;	\n"
"	color:#fff;\n"
"	border-bottom:1px solid  #fff;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 40, 91, 21));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 90, 131, 20));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 130, 131, 21));
        le_id_groupe = new QLineEdit(frame_2);
        le_id_groupe->setObjectName(QStringLiteral("le_id_groupe"));
        le_id_groupe->setGeometry(QRect(160, 40, 113, 20));
        le_niveau_groupe = new QLineEdit(frame_2);
        le_niveau_groupe->setObjectName(QStringLiteral("le_niveau_groupe"));
        le_niveau_groupe->setGeometry(QRect(160, 90, 113, 20));
        le_type_groupe = new QLineEdit(frame_2);
        le_type_groupe->setObjectName(QStringLiteral("le_type_groupe"));
        le_type_groupe->setGeometry(QRect(160, 130, 113, 20));
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 210, 75, 23));
        pushButton_modifiergroupe = new QPushButton(frame_2);
        pushButton_modifiergroupe->setObjectName(QStringLiteral("pushButton_modifiergroupe"));
        pushButton_modifiergroupe->setGeometry(QRect(150, 210, 75, 23));
        pushButton_4_supgroupe = new QPushButton(frame_2);
        pushButton_4_supgroupe->setObjectName(QStringLiteral("pushButton_4_supgroupe"));
        pushButton_4_supgroupe->setGeometry(QRect(100, 170, 91, 23));
        pushButton_16 = new QPushButton(frame_2);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(10, 320, 111, 23));
        recherche = new QLineEdit(frame_2);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setGeometry(QRect(130, 320, 113, 20));
        pushButton_11 = new QPushButton(page);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(90, 370, 75, 23));
        pushButton_11->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 3px;\n"
"border-radius: 3px;\n"
"background-color:rgb(255, 0, 0);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pushButton_12 = new QPushButton(page);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(480, 10, 91, 23));
        pushButton_12->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 3px;\n"
"border-radius: 3px;\n"
"background-color:rgb(255, 0, 0);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pushButton_13 = new QPushButton(page);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(600, 10, 75, 23));
        pushButton_13->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 3px;\n"
"border-radius: 3px;\n"
"background-color:rgb(255, 0, 0);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pushButton_14 = new QPushButton(page);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(300, 370, 75, 23));
        pushButton_14->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 3px;\n"
"border-radius: 3px;\n"
"background-color:rgb(255, 0, 0);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pushButton_15 = new QPushButton(page);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(180, 370, 75, 23));
        pushButton_15->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 3px;\n"
"border-radius: 3px;\n"
"background-color:rgb(255, 0, 0);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        label_11 = new QLabel(page);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(80, -40, 781, 461));
        label_11->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/164492392_156473049661713_6032789819772175644_n.png")));
        stackedWidget->addWidget(page);
        label_11->raise();
        tableView_2->raise();
        frame_2->raise();
        pushButton_11->raise();
        pushButton_12->raise();
        pushButton_13->raise();
        pushButton_14->raise();
        pushButton_15->raise();
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        pushButton_8 = new QPushButton(page_5);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(380, 80, 181, 51));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:rgb(255, 0, 0);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pushButton_9 = new QPushButton(page_5);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(380, 150, 181, 51));
        pushButton_9->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:rgb(255, 0, 0);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        stackedWidget->addWidget(page_5);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget_2 = new QStackedWidget(page_2);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(140, 351, 811, 16));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        stackedWidget_2->addWidget(page_4);
        tableView = new QTableView(page_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(70, 50, 511, 221));
        frame = new QFrame(page_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(600, 20, 221, 381));
        frame->setStyleSheet(QLatin1String("*{\n"
"	font-family:century gothic;\n"
"	color:white;\n"
"	font-size:17px;\n"
"}\n"
"\n"
"QFrame\n"
"{\n"
"	background:#555;\n"
"}\n"
"\n"
"/*QToolButton\n"
"{\n"
"	background:red;\n"
"	border-radius:60px;\n"
"}*/\n"
"\n"
"QPushButton\n"
"{\n"
"	color:white;\n"
"	background:#8B2C3D;\n"
"	border-radius:15px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	color:#8B2C3D;\n"
"	border-radius:15px;\n"
"	background:#fff;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"	background:transparent;\n"
"	border:none;	\n"
"	color:#fff;\n"
"	border-bottom:1px solid  #fff;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 121, 16));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 47, 13));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 120, 71, 16));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 160, 47, 13));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 220, 47, 13));
        le_id = new QLineEdit(frame);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(132, 20, 61, 20));
        le_nom = new QLineEdit(frame);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(132, 60, 61, 20));
        le_prenom = new QLineEdit(frame);
        le_prenom->setObjectName(QStringLiteral("le_prenom"));
        le_prenom->setGeometry(QRect(132, 110, 61, 20));
        le_tel = new QLineEdit(frame);
        le_tel->setObjectName(QStringLiteral("le_tel"));
        le_tel->setGeometry(QRect(132, 160, 61, 20));
        le_email = new QLineEdit(frame);
        le_email->setObjectName(QStringLiteral("le_email"));
        le_email->setGeometry(QRect(132, 210, 61, 20));
        on_pb_ajouter = new QPushButton(frame);
        on_pb_ajouter->setObjectName(QStringLiteral("on_pb_ajouter"));
        on_pb_ajouter->setGeometry(QRect(30, 270, 75, 23));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 270, 75, 23));
        pushButtonsupp = new QPushButton(frame);
        pushButtonsupp->setObjectName(QStringLiteral("pushButtonsupp"));
        pushButtonsupp->setGeometry(QRect(110, 350, 91, 23));
        le_id_supp = new QLineEdit(frame);
        le_id_supp->setObjectName(QStringLiteral("le_id_supp"));
        le_id_supp->setGeometry(QRect(162, 320, 61, 20));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 330, 91, 20));
        pushButton_10 = new QPushButton(page_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(90, 320, 75, 23));
        pushButton_10->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 3px;\n"
"border-radius: 3px;\n"
"background-color:rgb(255, 0, 0);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        frame_3 = new QFrame(page_2);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(200, 280, 281, 101));
        frame_3->setStyleSheet(QLatin1String("QFrame\n"
"{\n"
"	background:#555;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        pushButton_7 = new QPushButton(frame_3);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 10, 75, 23));
        pushButton_7->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 3px;\n"
"border-radius: 3px;\n"
"background-color:rgb(255, 0, 0);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pushButton_6 = new QPushButton(frame_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(80, 10, 75, 23));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 3px;\n"
"border-radius: 3px;\n"
"background-color:rgb(255, 0, 0);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        labelrecherche = new QLineEdit(frame_3);
        labelrecherche->setObjectName(QStringLiteral("labelrecherche"));
        labelrecherche->setGeometry(QRect(80, 60, 121, 21));
        pushButton_5 = new QPushButton(frame_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(0, 60, 75, 23));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 3px;\n"
"border-radius: 3px;\n"
"background-color:rgb(255, 0, 0);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pushButton_17 = new QPushButton(frame_3);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(170, 10, 75, 23));
        pushButton_3 = new QPushButton(page_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 20, 75, 23));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 3px;\n"
"border-radius: 3px;\n"
"background-color:rgb(255, 0, 0);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pushButton_4 = new QPushButton(page_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(380, 20, 75, 23));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 3px;\n"
"border-radius: 3px;\n"
"background-color:rgb(255, 0, 0);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        label_10 = new QLabel(page_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(50, -70, 811, 501));
        label_10->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/164492392_156473049661713_6032789819772175644_n.png")));
        stackedWidget->addWidget(page_2);
        label_10->raise();
        stackedWidget_2->raise();
        tableView->raise();
        frame->raise();
        pushButton_10->raise();
        frame_3->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        baha->setCentralWidget(centralwidget);
        menubar = new QMenuBar(baha);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1046, 22));
        baha->setMenuBar(menubar);
        statusbar = new QStatusBar(baha);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        baha->setStatusBar(statusbar);

        retranslateUi(baha);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(baha);
    } // setupUi

    void retranslateUi(QMainWindow *baha)
    {
        baha->setWindowTitle(QApplication::translate("baha", "MainWindow", Q_NULLPTR));
        label_7->setText(QApplication::translate("baha", "ID_groupe", Q_NULLPTR));
        label_8->setText(QApplication::translate("baha", "Niveau_groupe", Q_NULLPTR));
        label_9->setText(QApplication::translate("baha", "type_groupe", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("baha", "Ajouter", Q_NULLPTR));
        pushButton_modifiergroupe->setText(QApplication::translate("baha", "Modifier", Q_NULLPTR));
        pushButton_4_supgroupe->setText(QApplication::translate("baha", "Supprimer", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("baha", "Recherche", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("baha", "back", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("baha", "EXPORTER pdf", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("baha", "Imprimer", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("baha", "Nom A/Z", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("baha", "Nom Z-A", Q_NULLPTR));
        label_11->setText(QString());
        pushButton_8->setText(QApplication::translate("baha", "groupe", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("baha", "adherent", Q_NULLPTR));
        label->setText(QApplication::translate("baha", "Identifiant", Q_NULLPTR));
        label_2->setText(QApplication::translate("baha", "Nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("baha", "Prenom", Q_NULLPTR));
        label_4->setText(QApplication::translate("baha", "Tel", Q_NULLPTR));
        label_5->setText(QApplication::translate("baha", "Email", Q_NULLPTR));
        le_nom->setText(QString());
        on_pb_ajouter->setText(QApplication::translate("baha", "Ajouter", Q_NULLPTR));
        pushButton->setText(QApplication::translate("baha", "Modifier", Q_NULLPTR));
        pushButtonsupp->setText(QApplication::translate("baha", "Supprimer", Q_NULLPTR));
        label_6->setText(QApplication::translate("baha", "identifiant", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("baha", "back", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("baha", "Nom Z-A", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("baha", "Nom A-Z", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("baha", "Recherche", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("baha", "Excel", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("baha", "Exporter PDF", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("baha", "Imprimer", Q_NULLPTR));
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class baha: public Ui_baha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAHA_H
