#include <QPushButton>
#include <QApplication>
#include <iostream>
#include "DatabaseManager.cpp"
//#include <sodium.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    auto* button = new QPushButton();
    button->show();
    return a.exec();
}