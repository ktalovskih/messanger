#include <iostream>
#include "DatabaseManager.h"

DatabaseManager::DatabaseManager()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/zxc/messanger/server/db.db");
}

