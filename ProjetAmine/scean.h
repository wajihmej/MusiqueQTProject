#ifndef SCEAN_H
#define SCEAN_H
#include<QString>
#include <QSqlQueryModel>
#include <QDebug>
#include<QSqlRecord>
#include <QMap>
#include <QVector>

#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtWidgets/QGridLayout>
QT_CHARTS_USE_NAMESPACE

class scean
{
public:
    scean();
   scean(int,QString,QString);
    int getids();
    QString getdate();
    QString getduree();
    void setids(int);
    void setdate(QString);
    void setduree(QString);
    bool ajouter_sceance();
    bool supprimer_seance(int);
    bool modifier_sceance(int);
    QSqlQueryModel* affichersceance();
    QSqlQueryModel * afficherIDS();

    QChartView * stat();
    QSqlQueryModel* rechercherdynamique(QString input,QString filter);
    QSqlQueryModel * affichersceancetrie(QString x);
private:
    int ids;
    QString date,duree;

};

#endif // SCEAN_H
