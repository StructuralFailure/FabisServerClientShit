#include "Client.h"
#include "Server.h"

#include <netdb.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>


static int server_fd;


void client_init(void) 
{
	// pass.
}


bool client_connect(const char* address)
{
	struct addrinfo hints;
	struct addrinfo* res;
	memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;
	getaddrinfo(address, SERVER_PORT, &hints, &res);

	server_fd = socket(res->ai_family, res->ai_socktype, res->ai_protocol);

	printf("client: connecting to server.");

	connect(server_fd, res->ai_addr, res->ai_addrlen);

	printf("client: connection established.");

	return true;
}


void client_pump(void)
{

}