#include "cours.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QString>
#include <QObject>
Cours::Cours()
{

    id=0; nom=""; prenom="";
}
QSqlQueryModel * Cours::afficherID(){
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select id from cours");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    return model;
}






Cours::Cours(int id,QString nom,QString prenom)
{   this->id=id;
    this->nom=nom;
    this->prenom=prenom;
}
int Cours::getid(){return id;}
QString Cours::getnom(){return nom;}
QString  Cours::getprenom(){return prenom;}
void Cours::setid(int id){this->id=id;}
void Cours::setnom(QString nom) {this->nom=nom;}
void Cours::setprenom(QString prenom){this->prenom=prenom;}

bool Cours:: ajouter()
{
    QSqlQuery query;
    QString res= QString::number(id);
    query.prepare("INSERT INTO cours (id, nom, prenom) "
                        "VALUES (:id, :nom, :prenom)");
    query.bindValue(0, res);
    query.bindValue(1, nom);
    query.bindValue(2, prenom);


    return    query.exec();

}
bool Cours::supprimer(int id )
{
    QSqlQuery query;
    query.prepare(" delete from cours where id=:id");
    // bindvalue vafaire le correspondence entre le nom de la variable et la zone saisie par l'utillisateur
    query.bindValue(0,id);


     return query.exec();


}
QSqlQueryModel*Cours ::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM cours");
    model->setHeaderData(0, Qt::Horizontal,QObject:: tr("Identifiant"));
    model->setHeaderData(1, Qt::Horizontal,QObject:: tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal,QObject:: tr("Prenom"));
    return model;



}




bool Cours::modifier(int id){
    QSqlQuery query;
    QString id_string= QString::number(id);

    query.prepare("Update cours set id=:id,nom=:nom,prenom=:prenom where id=:id");

    query.bindValue(":id",id_string);
      query.bindValue(":nom",nom);
      query.bindValue(":prenom",prenom);
      return query.exec();

}

QSqlQueryModel *  Cours::trierr(const QString &critere, const QString &mode )
{
    QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from cours order by "+critere+" "+mode+"");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("nom"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("prenom"));

    return model;
}












