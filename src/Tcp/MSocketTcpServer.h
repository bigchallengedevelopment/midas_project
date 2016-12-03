#ifndef MSOCKETTCPSERVER_H
#define MSOCKETTCPSERVER_H

#include <QTcpServer>

class MSocketTCPServer : public QTcpServer
{
public:
    MSocketTCPServer();

    void CloseSocket();
    bool StartListening();

    void SetLocalPort(int localPort) {mLocalPort = localPort;}
    int GetLocalPort() { return mLocalPort;}

private:
    int         mLocalPort;
};

#endif // MSOCKETTCPSERVER_H
