#!/bin/bash

clang main.c net/Client.c net/Server.c net/Message.c net/Packet.c util/MouseMover.c -lX11
