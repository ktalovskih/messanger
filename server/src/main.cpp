#include <QPushButton>
#include <QApplication>
#include <iostream>
//#include <sodium.h>

int main(int argc, char *argv[])
{
    // if (sodium_init() < 0) {
    //     std::cerr << "Libsodium initialization failed!" << std::endl;
    //     return 1;
    // }

    QApplication a(argc, argv);
    
    auto* button = new QPushButton();
    button->show();
    return a.exec();
}