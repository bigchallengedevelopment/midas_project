#ifndef MAPPLICATION_H
#define MAPPLICATION_H

#include <QApplication>

class MApplication : public QApplication
{
public:
    MApplication(int &argc, char **argv);
    ~MApplication();
};

#endif // MAPPLICATION_H
