#include "sessioninter.h"
#include "ui_sessioninter.h"
#include <QMessageBox>

#include <QtPrintSupport/QPrintDialog>
#include "tableprinter.h"
#include <QPrinter>
#include <QPrintPreviewDialog>

//PDF
class PrintBorder : public PagePrepare {
public:
    virtual void preparePage(QPainter *painter);
    static int pageNumber;
};

int PrintBorder::pageNumber = 0;

void PrintBorder::preparePage(QPainter *painter) { // print a border on each page
    QRect rec = painter->viewport();
    painter->setPen(QPen(QColor(0, 0, 0), 1));
    painter->drawRect(rec);
    painter->translate(10, painter->viewport().height() - 10);
    painter->drawText(0, 0, QString("Page %1").arg(pageNumber));
    pageNumber += 1;
}
//

sessioninter::sessioninter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sessioninter)
{
    ui->setupUi(this);

    setWindowTitle("Gestion d'evenement");

    //Column size
    ui->tablemodifier->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    QStringList list;
    list << "" << "NOM" << "PRENOM" << "TYPE" << "DEBUT"<< "FIN";

    ui->comboBox_Tri->addItems(list);

    //refresh combobox + tableau
    refresh();
}

sessioninter::~sessioninter()
{
    delete ui;
}

void sessioninter::refresh(){
    //remplir tableau
    ui->tablemodifier->setModel(tmpsession.afficher());

    ui->comboBox->setModel(tmpsession.remplircombosession());
    ui->comboBox_modif->setModel(tmpsession.remplircombosession());

}

void sessioninter::on_AjouterBouton_clicked()
{
    session ses(ui->Nom->toPlainText(),ui->prenom->toPlainText(),ui->type->toPlainText(),ui->datedebut->dateTime(),ui->datefin->dateTime());
    bool test = ses.ajouter();
    if(test)
{
        QMessageBox::information(nullptr, QObject::tr("Ajouter une session"),
        QObject::tr("Session ajouté.\n" "Click Cancel to exit."), QMessageBox::Cancel);

        }
          else
          {
              QMessageBox::critical(nullptr, QObject::tr("Ajouter une session"),
                          QObject::tr("Erreur !.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
          }
    //refresh combobox + tableau
    refresh();

}

void sessioninter::on_comboBox_modif_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;

    QString id = ui->comboBox_modif->currentText();

    query =tmpsession.request(id);
    if(query.exec())
    {
        while(query.next())
        {
            ui->Nom_modif->setText(query.value(1).toString());
            ui->Prenom_modif->setText(query.value(2).toString());
            ui->Type_modif->setText(query.value(3).toString());
            ui->datedebut_modif->setDateTime(query.value(4).toDateTime());
            ui->datefin_modif->setDateTime(query.value(5).toDateTime());

        }
    }

}

void sessioninter::on_ModifierBouton_clicked()
{
    if((ui->Nom_modif->toPlainText() != "") &&(ui->Prenom_modif->toPlainText() != "")&&(ui->Type_modif->toPlainText() != ""))
    {
        if(tmpsession.modifier(ui->Nom_modif->toPlainText(),ui->Prenom_modif->toPlainText(),ui->Type_modif->toPlainText(),ui->datedebut_modif->dateTime(),ui->datefin_modif->dateTime(),ui->comboBox_modif->currentText()))
        {
            //refresh combobox + tableau
            refresh();
            //message
            QMessageBox::information(this, QObject::tr("Modifier une session"),
                        QObject::tr("Session Modifier.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::critical(this, QObject::tr("Modifier une Session"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }


    }

}


void sessioninter::on_SupprimerBouton_clicked()
{
    QMessageBox::StandardButton reply =QMessageBox::question(this,
                          "Supprimer","Voulez-vous vraiment supprimer ?",
                          QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        bool test=tmpsession.supprimer(ui->comboBox->currentText().toInt());
        if(test)
        {
            //refresh combobox + tableau
            refresh();

            //message
            QMessageBox::information(this, QObject::tr("Supprimer une Session"),
                        QObject::tr("Session supprimé.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::critical(this, QObject::tr("Supprimer une Session"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }

    }
}

void sessioninter::on_recherche_cursorPositionChanged(int arg1, int arg2)
{
    ui->tablemodifier->setModel(tmpsession.afficherecherche(ui->recherche->text()));

    QString test =ui->recherche->text();

    if(test=="")
    {
        ui->tablemodifier->setModel(tmpsession.afficher());//refresh
    }
}

void sessioninter::on_comboBox_Tri_currentIndexChanged(const QString &arg1)
{
    if(!(ui->comboBox_Tri->currentText()==""))
    {
        ui->tablemodifier->setModel(tmpsession.triafficher(ui->comboBox_Tri->currentText()));
    }


}

void sessioninter::on_comboBox_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;

    QString id = ui->comboBox->currentText();

    query =tmpsession.request(id);
    if(query.exec())
    {
        while(query.next())
        {
            ui->Nomval->setText(query.value(1).toString());
            ui->Prenomval->setText(query.value(2).toString());
            ui->Typeval->setText(query.value(3).toString());
            ui->Datedebval->setText(query.value(4).toString());
            ui->datefinval->setText(query.value(5).toString());
        }
    }

}

//PDF
void sessioninter::on_PDF_clicked()
{

    QString strStream;
               QTextStream out(&strStream);
               const int rowCount = ui->tablemodifier->model()->rowCount();
               const int columnCount =ui->tablemodifier->model()->columnCount();

               out <<  "<html>\n"
                       "<head>\n"
                       "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                       <<  QString("<title>%1</title>\n").arg("eleve")
                       <<  "</head>\n"
                       "<body bgcolor=#F4B8B8 link=#5000A0>\n"
                          // "<img src='C:/Users/ksemt/Desktop/final/icon/logo.webp' width='20' height='20'>\n"
                           "<img src='C:/Users/DeLL/Desktop/logooo.png' width='100' height='100'>\n"
                           "<h1>   Liste des Session </h1>"
                            "<h1>  </h1>"

                           "<table border=1 cellspacing=0 cellpadding=2>\n";


               // headers
                   out << "<thead><tr bgcolor=#f0f0f0>";
                   for (int column = 0; column < columnCount; column++)
                       if (!ui->tablemodifier->isColumnHidden(column))
                           out << QString("<th>%1</th>").arg(ui->tablemodifier->model()->headerData(column, Qt::Horizontal).toString());
                   out << "</tr></thead>\n";
                   // data table
                      for (int row = 0; row < rowCount; row++) {
                          out << "<tr>";
                          for (int column = 0; column < columnCount; column++) {
                              if (!ui->tablemodifier->isColumnHidden(column)) {
                                  QString data = ui->tablemodifier->model()->data(ui->tablemodifier->model()->index(row, column)).toString().simplified();
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

                      QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
                      if (dialog->exec() == QDialog::Accepted) {
                          document->print(&printer);
                   }
}

