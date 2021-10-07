#include "administrateurs.h"

//********Initialisation

//Constructeur par defaut
administrateurs::administrateurs()
{

}

//Constructeur pour Afficher

administrateurs::administrateurs(int id,QString nomutil,QString mdp,QString role)
{
    this->id=id;
    this->nomutil=nomutil;
    this->mdp=mdp;
    this->role=role;

}

//Constructeur pour Ajouter

administrateurs::administrateurs(QString nomutil,QString mdp,QString role)
{
    this->id=id;
    this->nomutil=nomutil;
    this->mdp=mdp;
    this->role=role;

}




//*******AJOUTER

bool administrateurs::ajouter()
{
QSqlQuery query;

query.prepare("INSERT INTO ADMINISTRATEUR (nomutil, mdp, role) "
                    "VALUES (:nomutil, :mdp, :role)");


query.bindValue(":nomutil", nomutil);
query.bindValue(":mdp", mdp);
query.bindValue(":role", role);


return    query.exec();
}

//******AFFICHER

QSqlQueryModel * administrateurs::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from ADMINISTRATEUR");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom Utilisateur"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Mot de passe"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Role"));



    return model;
}

//*******SUPPRIMPER

bool administrateurs::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from ADMINISTRATEUR where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}



//*******MODIFIER

bool administrateurs::modifier(QString nomutil, QString mdp, QString role,QString id)
{
QSqlQuery query;

query.prepare("UPDATE ADMINISTRATEUR SET nomutil= :nomutil, mdp= :mdp, role= :role "
                    " WHERE  ID = :id ");


query.bindValue(":id", id);
query.bindValue(":nomutil", nomutil);
query.bindValue(":mdp", mdp);
query.bindValue(":role", role);


return    query.exec();
}

//******REMPLIR COMBO BOX

QSqlQueryModel * administrateurs::remplircomboadmin()
{
    QSqlQueryModel * mod= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select ID from ADMINISTRATEUR");
    query.exec();
    mod->setQuery(query);
    return mod;
}


QSqlQuery administrateurs::request(QString id)
{
    QSqlQuery query;
    query.prepare("select * from ADMINISTRATEUR where ID= '"+id+"'");
    query.addBindValue(id);
    query.exec();
    return query;
}

//******RECHERCHE AVANCEE

QSqlQueryModel * administrateurs::afficherecherche(QString res)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select * from ADMINISTRATEUR  where (nomutil LIKE '%"+res+"%' OR id LIKE '%"+res+"%' OR role LIKE '%"+res+"%')");
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom Utilisateur"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Mot de passe"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Role"));


    return model;
}

//******AFFICHER TRI

QSqlQueryModel * administrateurs::triafficher(QString col)
{QSqlQueryModel * model= new QSqlQueryModel();

    QSqlQuery query;
    query.prepare("select * from ADMINISTRATEUR order by "+col);
    query.exec();


model->setQuery(query);

model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom Utilisateur"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Mot de passe"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Role"));


return model;
}

QSqlQuery administrateurs::login(QString nom,QString mdp)
{
    QSqlQuery query;
    query.prepare("select * from ADMINISTRATEUR where nomutil= '"+nom+"' and mdp='"+mdp+"'");
    query.addBindValue(id);
    query.exec();
    return query;
}

