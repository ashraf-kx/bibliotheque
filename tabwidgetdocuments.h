#ifndef TABWIDGETDOCUMENTS_H
#define TABWIDGETDOCUMENTS_H

#include <QtWidgets/QTabWidget>

#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QSortFilterProxyModel>
#include <QtWidgets/QDataWidgetMapper>

#include <QDebug>
#include <QDate>
#include <QtWidgets/QGraphicsDropShadowEffect>

#include "archiveddoc.h"
#include "activedoc.h"

namespace Ui {
class TabWidgetDocuments;
}

class TabWidgetDocuments : public QTabWidget
{
    Q_OBJECT
    struct Employer{
        QString fullName;
        int id;
    };

    struct Document{
        QString title;
        QString owner;
        int id;
    };
    
public:
    explicit TabWidgetDocuments(QWidget *parent = 0);
    QList<Document> getListDocsAvailable();
    QList<Employer> getListWorkers();

    ~TabWidgetDocuments();

    void startMapper();
public slots:
    void updateLists();
    void doAssociate();
    void currentActiveStats();
    void displayArchivedDocs();
private:
    Ui::TabWidgetDocuments *ui;
    QSqlDatabase DBH;
    QSqlTableModel    *modelDocs;
    QDataWidgetMapper *mapper;
    QSortFilterProxyModel *proxyModelDocs;
    QList<Document> listdocs;
    QList<Employer> listEmpls;

    QSqlTableModel *modelClient;
    QGraphicsDropShadowEffect *sh;
};

#endif // TABWIDGETDOCUMENTS_H
