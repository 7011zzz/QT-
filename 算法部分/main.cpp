#include "parameter_window.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    parameter_window window;
    window.show();
    return app.exec();
}
