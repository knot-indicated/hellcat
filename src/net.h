/* copyright (c) 2013 Kia <> */

#define _GNU_SOURCE
#include <fcntl.h>
#include <stdint.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <unistd.h>
#include <errno.h>

ssize_t send_all(int socket, const uint8_t *buffer, size_t length, int flag);
ssize_t recv_all(int socket, uint8_t *buffer, size_t length, int flag);
ssize_t read_all(int fd, uint8_t *buffer, size_t length);
ssize_t write_all(int fd, const uint8_t *buffer, size_t count);
int make_socket(char *node, char *port);
int make_listener(char *port);

#define CONT 0xcc
#define DONE 0xdd
