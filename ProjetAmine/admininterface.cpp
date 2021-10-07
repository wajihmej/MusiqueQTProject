#include "admininterface.h"
#include "ui_admininterface.h"
#include <QMessageBox>

admininterface::admininterface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admininterface)
{
    ui->setupUi(this);

    setWindowTitle("Gestion d'administrateur");

    //INITIALISATION ADMIN
    //Column size
    ui->tableView_admin->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_ens->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    QStringList listrole;
    listrole << "" << "ADMIN" << "SUPER ADMIN";

    ui->comboBox_role->addItems(listrole);
    ui->comboBox_role_modif->addItems(listrole);

    //remplir combobox tri ADMIN
    QStringList list_tri_admin;
    list_tri_admin << "" << "NOMUTIL" << "MDP" << "ROLE" ;
    ui->comboBox_admin_tri->addItems(list_tri_admin);

    //refresh combobox + tableau
    refreshAdmin();
    refreshEns();

}

admininterface::~admininterface()
{
    delete ui;
}

//******** PARTIE ADMIN

//refresh data
void admininterface::refreshAdmin()
{
    //remplir tableau
    ui->tableView_admin->setModel(tmpadmin.afficher());

    ui->comboBox_admin_modif->setModel(tmpadmin.remplircomboadmin());
    ui->comboBox_admin_supp->setModel(tmpadmin.remplircomboadmin());
}

//AJOUTER ADMIN
void admininterface::on_btn_ajouter_admin_clicked()
{
    administrateurs admin(ui->nomutil->text(),ui->mdp->text(),ui->comboBox_role->currentText());
    bool test = admin.ajouter();
    if(test)
{
        QMessageBox::information(nullptr, QObject::tr("Ajouter un Admin"),
        QObject::tr("Admin ajouté.\n" "Click Cancel to exit."), QMessageBox::Cancel);

        }
          else
          {
              QMessageBox::critical(nullptr, QObject::tr("Ajouter un Admin"),
                          QObject::tr("Erreur !.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
          }
    //refresh combobox + tableau
    refreshAdmin();
}

//MODIFIER ADMIN

void admininterface::on_comboBox_admin_modif_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;

    QString id = ui->comboBox_admin_modif->currentText();

    query =tmpadmin.request(id);
    if(query.exec())
    {
        while(query.next())
        {
            ui->nomutil_modif->setText(query.value(1).toString());
            ui->mdp_modif->setText(query.value(2).toString());
            ui->comboBox_role_modif->setCurrentText(query.value(3).toString());

        }
    }

}

void admininterface::on_modifier_admin_clicked()
{
    if((ui->nomutil_modif->text() != "") &&(ui->mdp_modif->text() != ""))
    {
        if(tmpadmin.modifier(ui->nomutil_modif->text(),ui->mdp_modif->text(),ui->comboBox_role_modif->currentText(),ui->comboBox_admin_modif->currentText()))
        {
            //refresh combobox + tableau
            refreshAdmin();
            //message
            QMessageBox::information(this, QObject::tr("Modifier un Admin"),
                        QObject::tr("Admin Modifier.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::critical(this, QObject::tr("Modifier un Admin"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }


    }

}

//SUPPRIMER ADMIN

void admininterface::on_comboBox_admin_supp_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;

    QString id = ui->comboBox_admin_supp->currentText();

    query =tmpadmin.request(id);
    if(query.exec())
    {
        while(query.next())
        {
            ui->nomutil_val->setText(query.value(1).toString());
            ui->mdp_val->setText(query.value(2).toString());
            ui->role_val->setText(query.value(3).toString());
        }
    }

}


void admininterface::on_suprimer_admin_clicked()
{
    QMessageBox::StandardButton reply =QMessageBox::question(this,
                          "Supprimer","Voulez-vous vraiment supprimer ?",
                          QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        bool test=tmpadmin.supprimer(ui->comboBox_admin_supp->currentText().toInt());
        if(test)
        {
            //refresh combobox + tableau
            refreshAdmin();

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

//RECHERCHE AVANCEE ADMIN

void admininterface::on_recherche_cursorPositionChanged(int arg1, int arg2)
{
    ui->tableView_admin->setModel(tmpadmin.afficherecherche(ui->recherche->text()));

    QString test =ui->recherche->text();

    if(test=="")
    {
        ui->tableView_admin->setModel(tmpadmin.afficher());//refresh
    }

}


void admininterface::on_comboBox_admin_tri_currentIndexChanged(const QString &arg1)
{
    if(!(ui->comboBox_admin_tri->currentText()==""))
    {
        ui->tableView_admin->setModel(tmpadmin.triafficher(ui->comboBox_admin_tri->currentText()));
    }
}


//******** PARTIE ENS

//refresh data
void admininterface::refreshEns()
{
    //remplir tableau
    ui->tableView_ens->setModel(tmpens.afficher());

    ui->comboBox_ens_supp->setModel(tmpens.remplircomboens());
    ui->comboBox_ens_modif->setModel(tmpens.remplircomboens());
}




void admininterface::on_btn_ajouter_ens_clicked()
{
    enseignants ens(ui->nom->text(),ui->prenom->text(),ui->tel->text().toInt(),ui->email->text(),ui->salaire->text().toFloat());
    bool test = ens.ajouter();
    if(test)
{
        QMessageBox::information(nullptr, QObject::tr("Ajouter un Enseignant"),
        QObject::tr("Enseignant ajouté.\n" "Click Cancel to exit."), QMessageBox::Cancel);

        }
          else
          {
              QMessageBox::critical(nullptr, QObject::tr("Ajouter un Enseignant"),
                          QObject::tr("Erreur !.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
          }
    //refresh combobox + tableau
    refreshEns();

}


//MODIFIER ENS

void admininterface::on_comboBox_ens_modif_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;

    QString id = ui->comboBox_ens_modif->currentText();

    query =tmpens.request(id);
    if(query.exec())
    {
        while(query.next())
        {
            ui->nom_modif->setText(query.value(1).toString());
            ui->prenom_modif->setText(query.value(2).toString());
            ui->tel_modif->setText(query.value(3).toString());
            ui->email_modif->setText(query.value(4).toString());
            ui->salaire_modif->setText(query.value(5).toString());
        }
    }

}

void admininterface::on_modifer_ens_btn_clicked()
{
    if((ui->nom_modif->text() != "") &&(ui->prenom_modif->text() != ""))
    {
        if(tmpens.modifier(ui->nom_modif->text(),ui->prenom_modif->text(),ui->tel_modif->text(),ui->email_modif->text(),ui->salaire_modif->text(),ui->comboBox_ens_modif->currentText()))
        {
            //refresh combobox + tableau
            refreshEns();
            //message
            QMessageBox::information(this, QObject::tr("Modifier un Ens"),
                        QObject::tr("Ens Modifier.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::critical(this, QObject::tr("Modifier un Ens"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }


    }

}
//SUPPRIMER ENS

void admininterface::on_comboBox_ens_supp_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;

    QString id = ui->comboBox_ens_supp->currentText();

    query =tmpens.request(id);
    if(query.exec())
    {
        while(query.next())
        {
            ui->nom_val->setText(query.value(1).toString());
            ui->prenom_val->setText(query.value(2).toString());
            ui->tel_val->setText(query.value(3).toString());
            ui->email_val->setText(query.value(4).toString());
            ui->salaire_val->setText(query.value(5).toString());
        }
    }

}

void admininterface::on_supprime_ens_btn_clicked()
{
    QMessageBox::StandardButton reply =QMessageBox::question(this,
                          "Supprimer","Voulez-vous vraiment supprimer ?",
                          QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        bool test=tmpens.supprimer(ui->comboBox_ens_supp->currentText().toInt());
        if(test)
        {
            //refresh combobox + tableau
            refreshEns();

            //message
            QMessageBox::information(this, QObject::tr("Supprimer un Ens"),
                        QObject::tr("Ens supprimé.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::critical(this, QObject::tr("Supprimer un Ens"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }

    }


}


//MAILING
void admininterface::sendMail()
{
    Smtp* smtp = new Smtp("wajih.mejri@esprit.tn", "", "smtp.gmail.com", 465);
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));


    smtp->sendMail("wajih.mejri@esprit.tn", "wajih.mejri@esprit.tn" ," objet test","Evenment ajouter");
}

void admininterface::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
}

