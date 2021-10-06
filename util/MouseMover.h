#ifndef H_FABI_UTIL_MOUSEMOVER
#define H_FABI_UTIL_MOUSEMOVER

#include <stdbool.h>
#include <stddef.h>


void mouse_mover_init(void);
void mouse_move(size_t x, size_t y);
void mouse_click(bool is_left_click);
void mouse_scroll(bool is_upwards_scroll);


#endif