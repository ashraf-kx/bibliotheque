#ifndef DB_H
#define DB_H

#include <QObject>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlDatabase>
#include <QDateTime>
#include <QDir>


class DB : public QObject
{
    Q_OBJECT
private:
      QSqlDatabase DBH;

public:
    explicit DB(QObject *parent = 0);
    bool createTable(const QString &nameTable,const QString &tableQueryStructure);
};

#endif // DB_H
