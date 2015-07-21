#ifndef _INSPIRE_NET_INTERFACE_TCP_CONNECTION_H_
#define _INSPIRE_NET_INTERFACE_TCP_CONNECTION_H_

#include "inspire.h"

namespace inspire {

   class tcpConnection
   {
   public:
      tcpConnection(const unsigned int port);
      tcpConnection(const char* ip, const unsigned int port);
      tcpConnection(const int sock);
      tcpConnection(const tcpConnection& conn);
      virtual ~tcpConnection();

      int socket() const { return _fd; }
      void accept(int& fd, sockaddr_in& addr);
      void bind();
      void listen(const unsigned int maxConn = 10);
      void connect();
      void close();

   protected:
      void _initAddr(sockaddr_in& addr);
      void _initAddr(const char* ip, const unsigned int port);
      void _init();

   protected:
      int   _fd;
      unsigned int _port;  // port for local
      sockaddr_in  _addr;  // addr for peer
   };
}
#endif