#include "evenementinter.h"
#include "ui_evenementinter.h"
#include "evenement.h"
#include <QMessageBox>


EvenementInter::EvenementInter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EvenementInter)
{
    ui->setupUi(this);
    setWindowTitle("Gestion d'evenement");

    //Column size
    ui->tablemodifier->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    QStringList list;
    list << "" << "NOM" << "DESCRIPTION" << "DATEEVENT" << "EMPLACEMENT";

    ui->comboBox_Tri->addItems(list);

    //refresh combobox + tableau
    refresh();

}

EvenementInter::~EvenementInter()
{
    delete ui;
}

void EvenementInter::refresh()
{

    //remplir tableau
    ui->tablemodifier->setModel(tmpevent.afficher());

    ui->comboBox->setModel(tmpevent.remplircomboevent());
    ui->comboBox_modif->setModel(tmpevent.remplircomboevent());
}



void EvenementInter::on_AjouterBouton_clicked()
{
    Evenement event(ui->Nom->toPlainText(),ui->Description->toPlainText(),ui->Emplacement->toPlainText(),ui->dateEdit->date());
    bool test = event.ajouter();
    if(test)
{
        QMessageBox::information(nullptr, QObject::tr("Ajouter un Client"),
        QObject::tr("Client ajouté.\n" "Click Cancel to exit."), QMessageBox::Cancel);
        sendMail();

        }
          else
          {
              QMessageBox::critical(nullptr, QObject::tr("Ajouter un Client"),
                          QObject::tr("Erreur !.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
          }
    //refresh combobox + tableau
    refresh();

}


void EvenementInter::on_SupprimerBouton_clicked()
{
    QMessageBox::StandardButton reply =QMessageBox::question(this,
                          "Supprimer","Voulez-vous vraiment supprimer ?",
                          QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        bool test=tmpevent.supprimer(ui->comboBox->currentText().toInt());
        if(test)
        {
            //refresh combobox + tableau
            refresh();

            //message
            QMessageBox::information(this, QObject::tr("Supprimer un Evenement"),
                        QObject::tr("Evenement supprimé.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::critical(this, QObject::tr("Supprimer un Evenement"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }

    }

}

void EvenementInter::on_comboBox_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;

    QString id = ui->comboBox->currentText();

    query =tmpevent.request(id);
    if(query.exec())
    {
        while(query.next())
        {
            ui->Nomval->setText(query.value(1).toString());
            ui->Descriptionval->setText(query.value(2).toString());
            ui->Dateeventval->setText(query.value(3).toString());
            ui->Emplacementval->setText(query.value(4).toString());
        }
    }

}

void EvenementInter::on_ModifierBouton_clicked()
{
    if((ui->Nom_modif->toPlainText() != "") &&(ui->Description_modif->toPlainText() != ""))
    {
        if(tmpevent.modifier(ui->Nom_modif->toPlainText(),ui->Description_modif->toPlainText(),ui->dateEdit_modif->date(),ui->Emplacement_modif->toPlainText(),ui->comboBox_modif->currentText()))
        {
            //refresh combobox + tableau
            refresh();
            //message
            QMessageBox::information(this, QObject::tr("Modifier un Evenement"),
                        QObject::tr("Evenement Modifier.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::critical(this, QObject::tr("Modifier un Evenement"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }


    }


}

void EvenementInter::on_comboBox_modif_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;

    QString id = ui->comboBox_modif->currentText();

    query =tmpevent.request(id);
    if(query.exec())
    {
        while(query.next())
        {
            ui->Nom_modif->setText(query.value(1).toString());
            ui->Description_modif->setText(query.value(2).toString());
            ui->dateEdit_modif->setDate(query.value(3).toDate());
            ui->Emplacement_modif->setText(query.value(4).toString());

        }
    }

}

void EvenementInter::on_comboBox_Tri_currentIndexChanged(const QString &arg1)
{
    if(!(ui->comboBox_Tri->currentText()==""))
    {
        ui->tablemodifier->setModel(tmpevent.triafficher(ui->comboBox_Tri->currentText()));
    }

}

void EvenementInter::on_recherche_cursorPositionChanged(int arg1, int arg2)
{
    ui->tablemodifier->setModel(tmpevent.afficherecherche(ui->recherche->text()));

    QString test =ui->recherche->text();

    if(test=="")
    {
        ui->tablemodifier->setModel(tmpevent.afficher());//refresh
    }


}

void EvenementInter::on_recherche_desc_cursorPositionChanged(int arg1, int arg2)
{
    ui->tablemodifier->setModel(tmpevent.afficherecherche_desc(ui->recherche_desc->text()));

    QString test =ui->recherche_desc->text();

    if(test=="")
    {
        ui->tablemodifier->setModel(tmpevent.afficher());//refresh
    }

}

void EvenementInter::on_recherche_emp_cursorPositionChanged(int arg1, int arg2)
{
    ui->tablemodifier->setModel(tmpevent.afficherecherche_emp(ui->recherche_emp->text()));

    QString test =ui->recherche_emp->text();

    if(test=="")
    {
        ui->tablemodifier->setModel(tmpevent.afficher());//refresh
    }

}
void EvenementInter::sendMail()
{
    Smtp* smtp = new Smtp("wajih.mejri@esprit.tn", "", "smtp.gmail.com", 465);
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));


    smtp->sendMail("wajih.mejri@esprit.tn", "wajih.mejri@esprit.tn" ," objet test","Evenment ajouter");
}

void EvenementInter::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
}


