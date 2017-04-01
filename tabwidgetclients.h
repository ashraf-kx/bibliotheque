#ifndef TABWIDGETCLIENTS_H
#define TABWIDGETCLIENTS_H

#include <QTabWidget>

#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QSortFilterProxyModel>
#include <QDataWidgetMapper>

#include <QComboBox>
#include <QSpinBox>
#include <QPrinter>
#include <QPainter>
#include <QPrintDialog>

namespace Ui {
class TabWidgetClients;
}

class TabWidgetClients : public QTabWidget
{
    Q_OBJECT
    struct clientData {
        QString idDocument;
        QString fullname;
        QString titleDoc;
        QString totalPages;
        QString languageDoc;
        QString fontFamily,fontSize,typeDoc,printingColor;

        QString depositeDay;
        QString deliveryDay;

        QString remarke;
        QString payement_state;
        QString phoneNumber;
        QString FirstEmail;
        bool isDeliveredByMail;

        QString price;
        QString pricePaid;
        uint date_created;
        uint date_modified;
    };
public:
    explicit TabWidgetClients(QWidget *parent = 0);
    clientData getDatafromForm();
    bool addClient(clientData mClientData);
    bool verificationSubmitedData(clientData mClientData);

    ~TabWidgetClients();

    void displayOneRow();

public slots:
    void clearForm();
    void saveDemande2DB();
    void startMapper();
    void deleteClient();
    int printTicket();

private:
    Ui::TabWidgetClients *ui;
    QSqlDatabase DBH;

    QSqlTableModel    *modelClient;
    QDataWidgetMapper *mapper;
    QSortFilterProxyModel *proxyModelClient;
    QWidget *father;
};

#endif
