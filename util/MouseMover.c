#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>


static Display *dpy;
static Window root_window;


void mouse_mover_init(void)
{
	dpy = XOpenDisplay(0);
	root_window = XRootWindow(dpy, 0);
	XSelectInput(dpy, root_window, KeyReleaseMask);
}


void mouse_move(size_t x, size_t y)
{
	XWarpPointer(dpy, None, root_window, 0, 0, 0, 0, x, y);
	XFlush(dpy);
}


void mouse_click(bool is_left_click)
{

}


void mouse_scroll(bool is_upwards_scroll)
{

}