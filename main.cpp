#include <QApplication>
#include "Dialer.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    QMainWindow* window = new Dialer;
    window->show();
    return app.exec();
}
