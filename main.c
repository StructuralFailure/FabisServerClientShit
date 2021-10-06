#include <stdio.h>
#include <string.h>

#include "util/MouseMover.h"
#include "net/Server.h"
#include "net/Client.h"


void run_as_client(const char* address);
void run_as_server(void);


int main(int argc, char** argv)
{
	switch (argc) {
	case 1:
		run_as_server();
	case 2:
		run_as_client(argv[1]);
	default:
		return 1; // invalid argument count
	}

	return 0;
}


void run_as_client(const char* address) 
{
	mouse_mover_init();
	client_init();
	(void)client_connect(address);

	for (;;) {
		// TODO: actually implement this, you fucking retard.
		client_pump();
	}
}


void run_as_server(void)
{
	server_init();
	(void)server_listen_and_accept();

	for (;;) {
		// TODO: actually implement this, you fucking retard.
		server_pump();
	}
}
