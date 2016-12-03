#include "../GUI/MainWindow/mainwindow.h"
#include "mcoreapplication.h"
#include "MApplication.h"
//#include <QApplication>

MCoreApplication* newApp(int &argc, char *argv[])
{
    for (int i = 1; i < argc; ++i)
        if (!qstrcmp(QString(argv[i]).toLower().toStdString().c_str(), "-gui"))
            return NULL;
    return new MCoreApplication(argc, argv);
}

int main(int argc, char *argv[])
{
    QScopedPointer<MCoreApplication> app(newApp(argc, argv));

    if (app.data())
    {
       // start GUI version...
        MainWindow w;
        w.show();
    }
    else
    {
       // start non-GUI version...
    }
    return app.data()->exec();
}
