#ifndef __ACTIVE_SOCKET_H__
#define __ACTIVE_SOCKET_H__


#include "basic_socket.h"

namespace xpu
{

/**
 * active socket
 */
class active_socket : public basic_socket
{
   public:
	/**
	 *   Establish a socket connection with the given foreign
	 *   address and port
	 *   @param foreignAddress foreign address (IP address or name)
	 *   @param foreignPort foreign port
	 *   @exception socket_exception thrown if unable to establish connection
	 */
	void connect(const std::string &foreign_address, unsigned short foreign_port)
	  throw (socket_exception);

	/**
	 *   Write the given buffer to this socket.  Call connect() before
	 *   calling send()
	 *   @param buffer buffer to be written
	 *   @param bufferLen number of bytes from buffer to be written
	 *   @exception socket_exception thrown if unable to send data
	 */
	void send(const void *buffer, int buffer_len) throw (socket_exception);

	/**
	 *   Read into the given buffer up to bufferLen bytes data from this
	 *   socket.  Call connect() before calling recv()
	 *   @param buffer buffer to receive the data
	 *   @param bufferLen maximum number of bytes to read into buffer
	 *   @return number of bytes read, 0 for EOF, and -1 for error
	 *   @exception socket_exception thrown if unable to receive data
	 */
	int recv(void *buffer, int buffer_len) throw (socket_exception);

	/**
	 *   Get the foreign address.  Call connect() before calling recv()
	 *   @return foreign address
	 *   @exception socket_exception thrown if unable to fetch foreign address
	 */
	std::string get_foreign_address() throw (socket_exception);

	/**
	 *   Get the foreign port.  Call connect() before calling recv()
	 *   @return foreign port
	 *   @exception socket_exception thrown if unable to fetch foreign port
	 */
	unsigned short get_foreign_port() throw (socket_exception);

   protected:
	active_socket(int type, int protocol) throw (socket_exception);
	active_socket(int new_conn_sd);

}; // class active_socket

#include "active_socket.cc"

} // xpu

#endif // __ACTIVE_SOCKET_H__

