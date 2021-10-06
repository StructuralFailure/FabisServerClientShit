#ifndef H_FABI_NET_SERVER
#define H_FABI_NET_SERVER

#include <stdbool.h>
#include <stddef.h>


#define SERVER_PORT "6480"


void server_init(void);
bool server_listen_and_accept(/* schauma */);
void server_pump(void);


#endif