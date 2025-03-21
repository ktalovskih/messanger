#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    auto* button = new QPushButton();
    button->show();
    return app.exec();
}