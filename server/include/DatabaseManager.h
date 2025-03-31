#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H
#include <QSql>

class DatabaseManager{
    QSqlDatabase db;
    QString role;
public:
    DatabaseManager();
};


#endif /* DATABASEMANAGER_H */
