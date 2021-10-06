#ifndef H_FABI_NET_CLIENT
#define H_FABI_NET_CLIENT

#include <stdbool.h>
#include <stddef.h>



void client_init(void);
bool client_connect(const char* address);
void client_pump(void);

#endif