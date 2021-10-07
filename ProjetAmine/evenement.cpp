#include "evenement.h"


//********Initialisation

//Constructeur par defaut
Evenement::Evenement()
{
id=0;
nom="";
description="";
emplacement="";
}

//Constructeur pour Afficher
Evenement::Evenement(int id,QString nom,QString description,QString emplacement,QDate dateevent)
{
  this->id=id;
  this->nom=nom;
  this->description=description;
  this->emplacement=emplacement;
  this->dateevent=dateevent;
}

//Constructeur pour Ajouter
Evenement::Evenement(QString nom,QString description,QString emplacement,QDate dateevent)
{
  this->nom=nom;
  this->description=description;
  this->emplacement=emplacement;
  this->dateevent=dateevent;
}

//SETTERS
int Evenement::get_Id(){return  id;}
QString Evenement::get_Nom(){return  nom;}
QString Evenement::get_Description(){return  description;}
QString Evenement::get_Emplacement(){return  emplacement;}
QDate Evenement::get_Dateevent(){return  dateevent;}

//*******AJOUTER

bool Evenement::ajouter()
{
QSqlQuery query;

query.prepare("INSERT INTO EVENEMENT (nom, DESCRIPTION, EMPLACEMENT,DATEEVENT) "
                    "VALUES (:nom, :description, :emplacement, :dateevent)");


query.bindValue(":nom", nom);
query.bindValue(":description", description);
query.bindValue(":emplacement", emplacement);
query.bindValue(":dateevent", dateevent);


return    query.exec();
}

//******AFFICHER

QSqlQueryModel * Evenement::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from EVENEMENT");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Description"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date evenement"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Emplacement"));


    return model;
}

//*******SUPPRIMPER

bool Evenement::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from EVENEMENT where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}



//*******MODIFIER

bool Evenement::modifier(QString nom, QString descritpion, QDate dateevent,QString emplacement,QString id)
{
QSqlQuery query;

query.prepare("UPDATE EVENEMENT SET nom= :nom, DESCRIPTION= :description, EMPLACEMENT= :emplacement,DATEEVENT= :dateevent "
                    " WHERE  ID = :id ");


query.bindValue(":id", id);
query.bindValue(":nom", nom);
query.bindValue(":description", descritpion);
query.bindValue(":dateevent", dateevent);
query.bindValue(":emplacement", emplacement);


return    query.exec();
}

//******REMPLIR COMBO BOX

QSqlQueryModel * Evenement::remplircomboevent()
{
    QSqlQueryModel * mod= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select ID from EVENEMENT");
    query.exec();
    mod->setQuery(query);
    return mod;
}


QSqlQuery Evenement::request(QString id)
{
    QSqlQuery query;
    query.prepare("select * from EVENEMENT where ID= '"+id+"'");
    query.addBindValue(id);
    query.exec();
    return query;
}

//******RECHERCHE AVANCEE

QSqlQueryModel * Evenement::afficherecherche(QString res)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select * from EVENEMENT  where (NOM LIKE '%"+res+"%' )");
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Description"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date evenement"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Emplacement"));


    return model;
}
QSqlQueryModel * Evenement::afficherecherche_emp(QString res)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select * from EVENEMENT  where (EMPLACEMENT LIKE '%"+res+"%' )");
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Description"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date evenement"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Emplacement"));


    return model;
}
QSqlQueryModel * Evenement::afficherecherche_desc(QString res)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select * from EVENEMENT  where (DESCRIPTION LIKE '%"+res+"%' )");
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Description"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date evenement"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Emplacement"));


    return model;
}

//******AFFICHER TRI

QSqlQueryModel * Evenement::triafficher(QString col)
{QSqlQueryModel * model= new QSqlQueryModel();

    QSqlQuery query;
    query.prepare("select * from EVENEMENT order by "+col);
    query.exec();


model->setQuery(query);

model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Description"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date evenement"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Emplacement"));

return model;
}


