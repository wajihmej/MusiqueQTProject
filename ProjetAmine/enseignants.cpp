#include "enseignants.h"

//********Initialisation

//Constructeur par defaut

enseignants::enseignants()
{

}

//Constructeur pour Afficher

enseignants::enseignants(int id,QString nom,QString prenom,int tel ,QString email,float salaire)
{

    this->id=id;
    this->nom=nom;
    this->prenom=prenom;
    this->tel=tel;
    this->email=email;
    this->salaire=salaire;

}

//Constructeur pour Ajouter

enseignants::enseignants(QString nom,QString prenom,int tel ,QString email,float salaire)
{
    this->nom=nom;
    this->prenom=prenom;
    this->tel=tel;
    this->email=email;
    this->salaire=salaire;
}

//*******AJOUTER

bool enseignants::ajouter()
{
QSqlQuery query;

query.prepare("INSERT INTO ENSEIGNANT (NOM, PRENOM, TEL, EMAIL, SALAIRE)"
              " VALUES (:nom, :prenom, :tel, :email,:salaire)");

QString restel = QString::number(tel);
QString ressalaire = QString::number(salaire);
query.bindValue(":nom", nom);
query.bindValue(":prenom", prenom);
query.bindValue(":tel", restel);
query.bindValue(":email", email);
query.bindValue(":salaire", ressalaire);

return    query.exec();
}

//******AFFICHER

QSqlQueryModel * enseignants::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from ENSEIGNANT");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Telephone"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Email"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("Salaire"));


    return model;
}

//*******SUPPRIMPER

bool enseignants::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from ENSEIGNANT where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}



//*******MODIFIER

bool enseignants::modifier(QString nom, QString prenom, QString tel,QString email,QString salaire,QString id)
{
QSqlQuery query;

query.prepare("UPDATE ENSEIGNANT SET nom= :nom, prenom= :prenom, tel= :tel,email= :email,salaire= :salaire "
                    " WHERE  ID = :id ");


query.bindValue(":id", id);
query.bindValue(":nom", nom);
query.bindValue(":prenom", prenom);
query.bindValue(":tel", tel);
query.bindValue(":email", email);
query.bindValue(":salaire", salaire);


return    query.exec();
}

//******REMPLIR COMBO BOX

QSqlQueryModel * enseignants::remplircomboens()
{
    QSqlQueryModel * mod= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select ID from ENSEIGNANT");
    query.exec();
    mod->setQuery(query);
    return mod;
}


QSqlQuery enseignants::request(QString id)
{
    QSqlQuery query;
    query.prepare("select * from ENSEIGNANT where ID= '"+id+"'");
    query.addBindValue(id);
    query.exec();
    return query;
}
