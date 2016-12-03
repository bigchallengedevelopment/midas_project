#include "MSocketTcpServer.h"

MSocketTCPServer::MSocketTCPServer()
{

}

bool MSocketTCPServer::StartListening()
{
    return listen(QHostAddress::Any,GetLocalPort());
}

void MSocketTCPServer::CloseSocket()
{
    close();
}

