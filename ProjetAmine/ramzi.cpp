#include "ramzi.h"
#include "ui_ramzi.h"
#include "scean.h"
#include "cours.h"
#include <QFileDialog>
#include <QTextTableFormat>
#include <QStandardItemModel>
#include <QRadioButton>
#include<QtPrintSupport/QPrinter>
#include<QPdfWriter>
#include <QPainter>
#include<QFileDialog>
#include<QTextDocument>
#include <QTextEdit>
#include <QtSql/QSqlQueryModel>
#include<QtPrintSupport/QPrinter>
#include <QMessageBox>
#include "smtp.h"

Ramzi::Ramzi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ramzi)
{
    ui->setupUi(this);
    ui->comboBox->setModel(tmpscean.afficherIDS());
    ui->comboBox_2->setModel(tmpcours.afficherID());
    ui->comboBox_3->setModel(tmpcours.afficherID());
    ui->tabSeance->setModel(tmpscean.affichersceance());
    ui->tabcours->setModel(tmpcours.afficher());
    ui->comboBox_4->setModel(tmpscean.afficherIDS());
    ui->verticalLayout->addWidget(tmpscean.stat());

 //   connect(ui->pushButton_2, SIGNAL(clicked()),this, SLOT(sendMail()));

    //arduino

    int ret=A.connect_arduino();
            switch(ret){
            case(0):qDebug()<< "arduino is availble and connected to :"<< A.getarduino_port_name();
                break;
            case(1):qDebug()<< "arduino is availble but not connected to :"<< A.getarduino_port_name();
                break;
            case(-1):qDebug()<< "arduino is not availble";
            }
            QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));

}

Ramzi::~Ramzi()
{
    delete ui;
}
void Ramzi::update_label(){
   //TO DO
}

void Ramzi::refresh(){
    ui->comboBox->setModel(tmpscean.afficherIDS());
    ui->comboBox_2->setModel(tmpcours.afficherID());
    ui->comboBox_3->setModel(tmpcours.afficherID());
    ui->tabSeance->setModel(tmpscean.affichersceance());
    ui->tabcours->setModel(tmpcours.afficher());
    // ui->verticalLayout->addWidget(tmpscean.stat());

     int i= ui->verticalLayout->count();
     if (i==1){
        delete ui->verticalLayout->itemAt(0)->widget();
        ui->verticalLayout->addWidget(tmpscean.stat());
     }
     else{
          ui->verticalLayout->addWidget(tmpscean.stat());
         }
}


void Ramzi::on_ajouterSC_clicked()
{

    int ids= ui->lineEdit_9->text().toInt();
     // a pointer ui point to le_id to recover it and convert it to integer.
     QString date=ui->dateEdit->text();
     QString duree=ui->lineEdit_10->text();
     scean E(ids,date,duree);

     if (ids != NULL && date !=NULL && duree !=NULL)
     {
     E.ajouter_sceance();
     QMessageBox::information(nullptr, QObject::tr("Ajouter"),
                       QObject::tr("Sceance Ajoutée.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);
     }
     else {
         QMessageBox::critical(nullptr, QObject::tr("Ajouter"),
                     QObject::tr("Verifier Vos champs !.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);
     }
    refresh();

}

void Ramzi::on_SupprimerSc_clicked()
{

   int X = ui->comboBox_4->currentText().toInt();
       bool test=tmpscean.supprimer_seance(X);
        QMessageBox msgBox;
        if(test)
      {
            msgBox.setText("Suppression avec succés.");
           refresh();
       }
        else
            msgBox.setText("Echec de suppression");

        msgBox.exec();
}

void Ramzi::on_ModifieSC_clicked()
{
    int X = ui->comboBox->currentText().toInt();


     QString date=ui->dateEdit_2->text();
     QString duree=ui->lineEdit_11->text();

   scean S(X,date,duree);
   if ( duree !=NULL)
{
 bool test=S.modifier_sceance(X);
 QMessageBox::information(nullptr, QObject::tr("Ajouter"),
                   QObject::tr("Sceance Ajoutée.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);
}
   else
   {
       QMessageBox::critical(nullptr, QObject::tr("Ajouter"),
                   QObject::tr("Verifier Vos champs !.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);
   }
   refresh();



}

void Ramzi::on_AjouterC_clicked()
{
    int id= ui->lineEdit->text().toInt();
     // a pointer ui point to le_id to recover it and convert it to integer.
     QString nom=ui->lineEdit_2->text();
    QString prenom=ui->lineEdit_3->text();

     Cours E(id,nom,prenom);
     if (id != NULL && nom !=NULL && prenom !=NULL)
     {
     E.ajouter();
     QMessageBox::information(nullptr, QObject::tr("Ajouter"),
                       QObject::tr("Cours Ajoutée.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);
     refresh();
     }
     else
     {
         QMessageBox::critical(nullptr, QObject::tr("Ajouter"),
                     QObject::tr("Verifier Vos champs !.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);
     }

}

void Ramzi::on_supprimerC_2_clicked()
{

            int X =ui->comboBox_3->currentText().toInt();
               bool test=tmpcours.supprimer(X);
                QMessageBox msgBox;
                if(test)
              {
                    msgBox.setText("Suppression avec succés.");
            refresh();
                }
                else

                    msgBox.setText("Echec de suppression");

                msgBox.exec();

}

void Ramzi::on_ModifierC_clicked()
{
    int X = ui->comboBox_2->currentText().toInt();


     QString nom=ui->lineEdit_7->text();
     QString prenom=ui->lineEdit_8->text();

 Cours C(X,nom,prenom);
   //  tmpscean.modifier_sceance(X);
     if ( nom !=NULL && prenom !=NULL)
     {
 bool test=C.modifier(X)  ;
 QMessageBox::information(nullptr, QObject::tr("Modifier"),
                   QObject::tr("Cours Modifie.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);
 refresh();


     }
     else
     {
         QMessageBox::critical(nullptr, QObject::tr("Ajouter"),
                     QObject::tr("Verifier Vos champs !.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

     }

}
void Ramzi::on_pushButton_clicked()
{
    QString mode="DESC";
        if (ui->checkBox->checkState()==false)
            mode="ASC";
    ui->tabcours->setModel(tmpcours.trierr(ui->comboBox_5->currentText(),mode));
}



/*Mailling*/

void Ramzi::sendMail()
{
    Smtp* smtp = new Smtp("ramzi.ferjani@esprit.tn", "191JMT4030","smtp.gmail.com",465,3000);
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));
    smtp->sendMail("voitures", ui->lineEdit_5->text() , ui->lineEdit_6->text(),ui->textEdit->toPlainText());
}

void Ramzi::mailSent(QString status)
{
    if(status == "Message sent")
        int a = 0 ;

}

void Ramzi::on_pushButton_2_clicked()
{
    connect(ui->pushButton_2, SIGNAL(clicked()),this, SLOT(sendMail()));
}


void Ramzi::on_lineEdit_4_cursorPositionChanged(int arg1, int arg2)
{
    QString inputvalue;
    inputvalue=ui->lineEdit_4->text();
     ui->tabSeance->setModel(tmpscean.rechercherdynamique(inputvalue,"datee"));
}

void Ramzi::on_pushButton_3_clicked()
{
    QString strStream;
             QTextStream out(&strStream);

             const int rowCount = ui->tabSeance->model()->rowCount();
             const int columnCount = ui->tabSeance->model()->columnCount();

             out <<  "<html>\n"
                 "<head>\n"
                 "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                 <<  QString("<title>%1</title>\n").arg("strTitle")
                 <<  "</head>\n"
                 "<body bgcolor=#ffffff link=#5000A0>\n"

                //     "<align='right'> " << datefich << "</align>"
                 "<center> <H1>Liste des seances </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

             // headers
             out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
             for (int column = 0; column < columnCount; column++)
                 if (!ui->tabSeance->isColumnHidden(column))
                     out << QString("<th>%1</th>").arg(ui->tabSeance->model()->headerData(column, Qt::Horizontal).toString());
             out << "</tr></thead>\n";

             // data table
             for (int row = 0; row < rowCount; row++) {
                 out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                 for (int column = 0; column < columnCount; column++) {
                     if (!ui->tabSeance->isColumnHidden(column)) {
                         QString data = ui->tabSeance->model()->data(ui->tabSeance->model()->index(row, column)).toString().simplified();
                         out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                     }
                 }
                 out << "</tr>\n";
             }
             out <<  "</table> </center>\n"
                 "</body>\n"
                 "</html>\n";

        QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
        if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

        QPrinter printer (QPrinter::PrinterResolution);
         printer.setOutputFormat(QPrinter::PdfFormat);
        //printer.setPaperSize(QPrinter::A4);
        printer.setOutputFileName(fileName);

        QTextDocument doc;
         doc.setHtml(strStream);
         //doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
         doc.print(&printer);
}

void Ramzi::on_comboBox_8_currentIndexChanged(int index)
{
    ui->stackedWidget->setCurrentIndex(index);

}
