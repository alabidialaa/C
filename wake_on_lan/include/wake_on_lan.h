#ifndef _DEF_WAKE_ON_LAN_H_
# define _DEF_WAKE_ON_LAN_H

# include <stdio.h>
# include <sys/types.h>
# include <sys/socket.h>
# include <string.h>
# include <netinet/in.h>
# include <arpa/inet.h>

typedef	struct			s_socket
{
	struct sockaddr_in	socket_server;
	int					socket;
}						t_socket;

int						check_args(int, char *[]);
int						create_socket(t_socket *);

#endif
