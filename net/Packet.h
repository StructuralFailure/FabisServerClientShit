#ifndef H_FABI_NET_PACKET
#define H_FABI_NET_PACKET


#include <netdb.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/socket.h>



void packet_init(int recipient_sockfd);
void packet_send(char* data, size_t length);
size_t packet_receive(char* out_buffer, size_t out_buffer_size);


#endif