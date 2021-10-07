#include "baha.h"
#include "ui_baha.h"
#include "adherent.h"
#include "groupe.h"
#include "notification.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>
#include <QPdfWriter>
#include <QPainter>
#include <QSystemTrayIcon>
#include <QtPrintSupport/QPrinter>
#include <QTextDocument>
#include <QIntValidator>
#include <QValidator>
#include <QMediaPlayer>
#include "excel.h"
#include<QFileDialog>

baha::baha(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::baha)
{
    ui->setupUi(this);
   ui->le_id->setValidator(new QIntValidator(0,9999, this));
   ui->le_id_groupe->setValidator(new QIntValidator(0,9999, this));
   QRegExp rx("(|\"|/|\\.,|[A-Z,a-z]){30}");
   ui->le_nom->setValidator(new QRegExpValidator(rx, this));
   ui->tableView->setModel(A.afficher_adherent());
  ui->tableView_2->setModel(g.afficher_groupe());
  mysystem = new QSystemTrayIcon(this);
  mysystem ->setIcon(QIcon(":/myappico.png"));
  mysystem ->setVisible(true);
}

baha::~baha()
{
    delete ui;
}

void baha::on_on_pb_ajouter_clicked()
{ notification n;

   int id= ui->le_id->text().toInt();
     // a pointer ui point to le_id to recover it and convert it to integer.
     QString nom=ui->le_nom->text();
     QString prenom=ui->le_prenom->text();
     QString tel=ui->le_tel->text();
     QString email=ui->le_email->text();
  adherent A(id,nom,prenom,tel,email);

bool test=A.ajouter_adherent();
  QMessageBox msgBox;

  if(test)
{   n.setPopupText("adherent a été ajouté");
      n.show();
      mysystem->showMessage(tr("Notification"),tr("Il y a un ajout d'un adherent"));
     msgBox.setText("Ajout avec succés.");
      ui->tableView->setModel(A.afficher_adherent());

 }
  else
  {

      msgBox.setText(" Echec d'ajout");
  msgBox.exec();
}
  }










void baha::on_pushButtonsupp_clicked()
{
    notification n;
        int id=ui->le_id_supp->text().toUInt();
            bool test=A.supprimer_adherent(id);
            if(test)
            {  n.setPopupText("Adherent a été  Supprimé");
                n.show();
                mysystem->showMessage(tr("Notification"),tr("Il y a une suppression d'un Permis de construction"));
                ui->tableView->setModel(A.afficher_adherent());
                QMessageBox::information(nullptr, QObject::tr("Supprimer"),
                QObject::tr("Suppression avec succée"), QMessageBox::Ok);
               // hide();
            }
            else
            {
               // n.setPopupText("il y'a un probleme");
              // w.show();
                QMessageBox::critical(nullptr, QObject::tr("Supprimer"),
                QObject::tr("Suppression echoués"), QMessageBox::Ok);
            }
}




void baha::on_pushButton_clicked()
{

        notification n;
        int id=ui->le_id->text().toInt();
        QString nom=ui->le_nom->text();
        QString prenom=ui->le_prenom->text();
        QString tel=ui->le_tel->text();
        QString email=ui->le_email->text();

            adherent A(id,nom,prenom,tel,email);
            bool test=A.modifier_adherent(id);
            if(test)
            {  n.setPopupText("adherent a été modifié");
               n.show();
                mysystem->showMessage(tr("Notification"),tr("Il y a une modification d'un Certificat de decès"));
                ui->tableView->setModel(A.afficher_adherent());
                QMessageBox::information(nullptr, QObject::tr("Modification"),
                            QObject::tr("Ajout avec succés.\n" "Click Cancel to exit."), QMessageBox::Cancel);

            }
             else
            {
               // n.setPopupText("il y'a un probleme");
              // n.show();
                QMessageBox::critical(nullptr, QObject::tr("Modification"),
                            QObject::tr("Ajout échoué.\n""Click Cancel to exit."), QMessageBox::Cancel);
    }


}







void baha::on_pushButton_2_clicked()
{
    int id=ui->le_id_groupe->text().toInt();
      // a pointer ui point to le_id to recover it and convert it to integer.
      QString niveau=ui->le_niveau_groupe->text();
     int type=ui->le_type_groupe->text().toInt();

   groupe g(id,niveau,type);

 bool test=g.ajouter_groupe();
   QMessageBox msgBox;

   if(test)
 {
       msgBox.setText("Ajout avec succés.");
       ui->tableView_2->setModel(g.afficher_groupe());

  }
   else

       msgBox.setText(" Echec d'ajout");
   msgBox.exec();




}

void baha::on_pushButton_4_supgroupe_clicked()
{
    //notification n;
        int id=ui->le_id_groupe->text().toUInt();
            bool test=g.supprimer_groupe(id);
            if(test)
            {
                ui->tableView_2->setModel(g.afficher_groupe());
                QMessageBox::information(nullptr, QObject::tr("Supprimer"),
                QObject::tr("Suppression avec succée"), QMessageBox::Ok);
               // hide();
            }
            else
            {
               // n.setPopupText("il y'a un probleme");
              // w.show();
                QMessageBox::critical(nullptr, QObject::tr("Supprimer"),
                QObject::tr("Suppression echoués"), QMessageBox::Ok);
            }
}

void baha::on_pushButton_modifiergroupe_clicked()
{
    // notification n;
        int id=ui->le_id_groupe->text().toInt();
        QString niveau=ui->le_niveau_groupe->text();
      int type=ui->le_type_groupe->text().toInt();

            groupe g(id,niveau,type);
            bool test=g.modifier_groupe(id);
            if(test)
            {
                ui->tableView_2->setModel(g.afficher_groupe());
                QMessageBox::information(nullptr, QObject::tr("Modification"),
                            QObject::tr("Ajout avec succés.\n" "Click Cancel to exit."), QMessageBox::Cancel);

            }
             else
            {

                QMessageBox::critical(nullptr, QObject::tr("Modification"),
                            QObject::tr("Ajout échoué.\n""Click Cancel to exit."), QMessageBox::Cancel);
    }




}

void baha::on_pushButton_3_clicked()
{
    QPdfWriter pdf("C:/Users/DELL/Documents/smartclub_2A24/listeadherent.pdf");
                  QPainter painter(&pdf);
                 int i = 4000;
                      painter.setPen(Qt::blue);
                      painter.setFont(QFont("Arial", 25));
                      painter.drawText(950,1100,"Liste Des Adherents");
                      painter.setPen(Qt::black);
                      painter.setFont(QFont("Arial", 15));
                     // painter.drawText(1100,2000,afficheDC);
                      painter.drawRect(100,100,7300,2600);
                    painter.drawPixmap(QRect(7600,70,2000,2600),QPixmap("C:/Users/DELL/Documents/smartclub_2A24/logo.jpg"));
                      painter.drawRect(0,3000,9600,500);
                      painter.setFont(QFont("Arial", 9));
                      painter.drawText(200,3300,"ID");
                      painter.drawText(1600,3300,"NOM");
                      painter.drawText(2100,3300,"PRENOM");
                      painter.drawText(3200,3300,"TEL");
                      painter.drawText(5300,3300,"EMAIL");


                      QSqlQuery query;
                      query.prepare("select * from ADHERENT");
                      query.exec();
                      while (query.next())
                      {
                          painter.drawText(200,i,query.value(0).toString());
                          painter.drawText(1300,i,query.value(1).toString());
                          painter.drawText(2100,i,query.value(2).toString());
                          painter.drawText(3200,i,query.value(3).toString());
                          painter.drawText(5300,i,query.value(4).toString());


                         i = i + 500;
                      }
                      QMessageBox::information(nullptr, QObject::tr("PDF Enregistré!"),
                                  QObject::tr("PDF Enregistré!.\n" "Click Cancel to exit."), QMessageBox::Cancel);
}

void baha::on_pushButton_4_clicked()
{
    QString strStream;
                  QTextStream out(&strStream);

                  const int rowCount = ui->tableView->model()->rowCount();
                  const int columnCount = ui->tableView->model()->columnCount();
                  out <<"<html>\n"
                        "<head>\n"
                         "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                      << "<title>ERP - COMmANDE LIST<title>\n "
                      << "</head>\n"
                      "<body bgcolor=#ffffff link=#5000A0>\n"
                      "<h1 style=\"text-align: center;\"><strong> LISTE DES ADHERENTS  ""</strong></h1>"
                      "<table style=\"text-align: center; font-size: 13px;\" border=1>\n "
                        "</br> </br>";
                  // headers
                  out << "<thead><tr bgcolor=#56089A>";
                  for (int column = 0; column < columnCount; column++)
                      if (!ui->tableView->isColumnHidden(column))
                          out << QString("<th>%1</th>").arg(ui->tableView->model()->headerData(column, Qt::Horizontal).toString());
                  out << "</tr></thead>\n";

                  // data table
                  for (int row = 0; row < rowCount; row++) {
                      out << "<tr>";
                      for (int column = 0; column < columnCount; column++) {
                          if (!ui->tableView->isColumnHidden(column)) {
                              QString data =ui->tableView->model()->data(ui->tableView->model()->index(row, column)).toString().simplified();
                              out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                          }
                      }
                      out << "</tr>\n";
                  }
                  out <<  "</table>\n"
                      "</body>\n"
                      "</html>\n";

                  QTextDocument *document = new QTextDocument();
                  document->setHtml(strStream);

                  QPrinter printer;

                  QPrintDialog *dialog = new QPrintDialog(&printer, nullptr);
                  if (dialog->exec() == QDialog::Accepted) {
                      document->print(&printer);
                  }

                  delete document;
}

void baha::on_pushButton_5_clicked()
{
    QString id =ui->labelrecherche->text();
    ui->tableView->setModel(A.recherche(id));
}

void baha::on_pushButton_6_clicked()
{
    ui->tableView->setModel(A.triercroi());

}

void baha::on_pushButton_7_clicked()
{
    ui->tableView->setModel(A.trierdec());

}

void baha::on_tableView_activated(const QModelIndex &index) // modifier en cliquant dur le tableau
{
    adherent A;
    QString id=ui->tableView->model()->data(index).toString();
      QSqlQuery query;
      query.prepare("select * from ADHERENT where id LIKE '"+id+"%' or nom LIKE '"+id+"%' or prenom LIKE '"+id+"%'");
      if(query.exec())
      {
        while(query.next())
        {
            ui->le_id->setText(query.value(0).toString());
            ui->le_nom->setText(query.value(1).toString());
            ui->le_prenom->setText(query.value(2).toString());
            ui->le_tel->setText(query.value(3).toString());
            ui->le_email->setText(query.value(4).toString());

      }
      }
        else
        {

            //QMessageBox::critical(this,tr("error::"),query.lastError().text());
          QMessageBox::critical(nullptr, QObject::tr("error"),
                      QObject::tr("error.\n""Click Cancel to exit."), QMessageBox::Cancel);
      }
}

void baha::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void baha::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}

void baha::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void baha::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void baha::on_pushButton_12_clicked()
{
    QPdfWriter pdf("C:/Users/DELL/Documents/smartclub_2A24/listegroupe.pdf");
                  QPainter painter(&pdf);
                 int i = 4000;
                      painter.setPen(Qt::blue);
                      painter.setFont(QFont("Arial", 25));
                      painter.drawText(950,1100,"Liste Des groupe");
                      painter.setPen(Qt::black);
                      painter.setFont(QFont("Arial", 15));
                     // painter.drawText(1100,2000,afficheDC);
                      painter.drawRect(100,100,7300,2600);
                    painter.drawPixmap(QRect(7600,70,2000,2600),QPixmap("C:/Users/DELL/Documents/smartclub_2A24/logo.jpg"));
                      painter.drawRect(0,3000,9600,500);
                      painter.setFont(QFont("Arial", 9));
                      painter.drawText(200,3300,"ID");
                      painter.drawText(1600,3300,"NIVEAU");
                      painter.drawText(2100,3300,"TYPE");



                      QSqlQuery query;
                      query.prepare("select * from GROUPE");
                      query.exec();
                      while (query.next())
                      {
                          painter.drawText(200,i,query.value(0).toString());
                          painter.drawText(1300,i,query.value(1).toString());
                          painter.drawText(2100,i,query.value(2).toString());
                          painter.drawText(3200,i,query.value(3).toString());
                          painter.drawText(5300,i,query.value(4).toString());


                         i = i + 500;
                      }
                      QMessageBox::information(nullptr, QObject::tr("PDF Enregistré!"),
                                  QObject::tr("PDF Enregistré!.\n" "Click Cancel to exit."), QMessageBox::Cancel);
}

void baha::on_pushButton_13_clicked()
{
    QString strStream;
                  QTextStream out(&strStream);

                  const int rowCount = ui->tableView_2->model()->rowCount();
                  const int columnCount = ui->tableView_2->model()->columnCount();
                  out <<"<html>\n"
                        "<head>\n"
                         "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                      << "<title>ERP - COMmANDE LIST<title>\n "
                      << "</head>\n"
                      "<body bgcolor=#ffffff link=#5000A0>\n"
                      "<h1 style=\"text-align: center;\"><strong> LISTE DES ADHERENTS  ""</strong></h1>"
                      "<table style=\"text-align: center; font-size: 13px;\" border=1>\n "
                        "</br> </br>";
                  // headers
                  out << "<thead><tr bgcolor=#56089A>";
                  for (int column = 0; column < columnCount; column++)
                      if (!ui->tableView->isColumnHidden(column))
                          out << QString("<th>%1</th>").arg(ui->tableView_2->model()->headerData(column, Qt::Horizontal).toString());
                  out << "</tr></thead>\n";

                  // data table
                  for (int row = 0; row < rowCount; row++) {
                      out << "<tr>";
                      for (int column = 0; column < columnCount; column++) {
                          if (!ui->tableView_2->isColumnHidden(column)) {
                              QString data =ui->tableView_2->model()->data(ui->tableView_2->model()->index(row, column)).toString().simplified();
                              out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                          }
                      }
                      out << "</tr>\n";
                  }
                  out <<  "</table>\n"
                      "</body>\n"
                      "</html>\n";

                  QTextDocument *document = new QTextDocument();
                  document->setHtml(strStream);

                  QPrinter printer;

                  QPrintDialog *dialog = new QPrintDialog(&printer, nullptr);
                  if (dialog->exec() == QDialog::Accepted) {
                      document->print(&printer);
                  }

                  delete document;
}

void baha::on_pushButton_14_clicked()
{
    ui->tableView_2->setModel(g.triercroi());
}

void baha::on_pushButton_15_clicked()
{
  ui->tableView_2->setModel(g.trierdec());
}

void baha::on_pushButton_16_clicked()
{
    QString id =ui->recherche->text();
    ui->tableView_2->setModel(g.recherche(id));
}

void baha::on_tableView_activated2(const QModelIndex &index) // modifier en cliquant dur le tableau
{
   groupe g;
    QString id=ui->tableView_2->model()->data(index).toString();
      QSqlQuery query;
      query.prepare("SELECT * FROM GROUPE where id LIKE '"+id+"%' or NIVEAU LIKE '"+id+"%' or TYPE LIKE '"+id+"%'");
      if(query.exec())
      {
        while(query.next())
        {
            ui->le_id_groupe->setText(query.value(0).toString());
            ui->le_niveau_groupe->setText(query.value(1).toString());
            ui->le_type_groupe->setText(query.value(2).toString());


      }
      }
        else
        {

            //QMessageBox::critical(this,tr("error::"),query.lastError().text());
          QMessageBox::critical(nullptr, QObject::tr("error"),
                      QObject::tr("error.\n""Click Cancel to exit."), QMessageBox::Cancel);
      }
}






void baha::on_pushButton_17_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Excel file"), qApp->applicationDirPath (),
                                                           tr("Excel Files (*.xls)"));
           if (fileName.isEmpty())
               return;

           ExportExcelObject obj(fileName, "mydata", ui->tableView);

           obj.addField(0, "colum1", "char(20)");
           obj.addField(1, "colum2", "char(20)");
           obj.addField(2, "colum3", "char(20)");
           obj.addField(3, "colum4", "char(20)");
           obj.addField(4, "colum5", "char(20)");
           obj.addField(5, "colum6", "char(20)");
           obj.addField(6, "colum7", "char(20)");
           obj.addField(7, "colum8", "char(20)");
           obj.addField(8, "colum9", "char(20)");
           obj.addField(9, "colum10", "char(20)");
           obj.addField(10, "colum11", "char(20)");
           obj.addField(11, "colum12", "char(20)");
           obj.addField(12, "colum13", "char(20)");

           int retVal = obj.export2Excel();

           if( retVal > 0)
           {
               QMessageBox::information(this, tr("Done"),
                                        QString(tr("%1 records exported!")).arg(retVal)
                                        );
           }
}
