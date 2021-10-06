#include "Server.h"

#include <netdb.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>


static int sock_fd;
static int client_fd;


void server_init(void)
{
	// pass
}


bool server_listen_and_accept(void)
{
	struct sockaddr_storage their_addr;
	socklen_t addr_size;
	struct addrinfo hints;
	struct addrinfo* res;

	memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_flags = AI_PASSIVE;

	getaddrinfo(NULL, SERVER_PORT, &hints, &res);
	sock_fd = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
	bind(sock_fd, res->ai_addr, res->ai_addrlen);
	listen(sock_fd, 1); // backlog = 1

	printf("server: listening and waiting for client to connect.");

	addr_size = sizeof(their_addr);
	client_fd = accept(sock_fd, (struct sockaddr*)&their_addr, &addr_size);

	printf("server: client has connected.");

	return true;
}


void server_pump(void)
{

}
