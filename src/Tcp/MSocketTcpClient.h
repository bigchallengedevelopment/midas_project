#ifndef MSOCKETTCPCLIENT_H
#define MSOCKETTCPCLIENT_H

#include <QTcpServer>

class MSocketTcpClient : public QTcpServer
{
public:
    MSocketTcpClient();
};

#endif // MSOCKETTCPCLIENT_H
