#include "session.h"


//********Initialisation

//Constructeur par defaut

session::session()
{

}

//Constructeur pour Afficher

session::session(int id,QString nom,QString prenom,QString type,QDateTime debut,QDateTime fin)
{
    this->id=id;
    this->nom=nom;
    this->prenom=prenom;
    this->type=type;
    this->debut=debut;
    this->fin=fin;
}

//Constructeur pour Ajouter

session::session(QString nom,QString prenom,QString type,QDateTime debut,QDateTime fin)
{
    this->nom=nom;
    this->prenom=prenom;
    this->type=type;
    this->debut=debut;
    this->fin=fin;
}

//*******AJOUTER

bool session::ajouter()
{
QSqlQuery query;

query.prepare("INSERT INTO SESION (NOM, PRENOM, TYPE,DEBUT,FIN) "
                    "VALUES (:nom, :prenom, :type, :debut,:fin)");


query.bindValue(":nom", nom);
query.bindValue(":prenom", prenom);
query.bindValue(":type", type);
query.bindValue(":debut", debut);
query.bindValue(":fin", fin);


return    query.exec();
}

//******AFFICHER

QSqlQueryModel * session::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from SESION");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date Debut"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("Date Fin"));


    return model;
}

//*******SUPPRIMPER

bool session::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from SESION where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}



//*******MODIFIER

bool session::modifier(QString nom, QString prenom,QString type, QDateTime debut,QDateTime fin,QString id)
{
QSqlQuery query;

query.prepare("UPDATE SESION SET NOM= :nom, PRENOM= :prenom, TYPE= :type,DEBUT= :debut,FIN= :fin "
                    " WHERE  ID = :id ");


query.bindValue(":id", id);
query.bindValue(":nom", nom);
query.bindValue(":prenom", prenom);
query.bindValue(":type", type);
query.bindValue(":debut", debut);
query.bindValue(":fin", fin);


return    query.exec();
}

//******REMPLIR COMBO BOX

QSqlQueryModel * session::remplircombosession()
{
    QSqlQueryModel * mod= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select ID from SESION");
    query.exec();
    mod->setQuery(query);
    return mod;
}


QSqlQuery session::request(QString id)
{
    QSqlQuery query;
    query.prepare("select * from SESION where ID= '"+id+"'");
    query.addBindValue(id);
    query.exec();
    return query;
}

//******RECHERCHE AVANCEE

QSqlQueryModel * session::afficherecherche(QString res)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select * from SESION  where (NOM LIKE '%"+res+"%' )");
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date Debut"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Date Fin"));


    return model;
}

//******AFFICHER TRI

QSqlQueryModel * session::triafficher(QString col)
{QSqlQueryModel * model= new QSqlQueryModel();

    QSqlQuery query;
    query.prepare("select * from SESION order by "+col);
    query.exec();


model->setQuery(query);

model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date Debut"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("Date Fin"));

return model;
}

