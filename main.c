#include <string.h>
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
	int			nonBlock = 1;
	struct sockaddr_in	address;
	int			sockfd;
	unsigned char		buff[256];
	unsigned int		max_size_pkt;
	struct sockaddr_in	from;
	int		 	Len;
	unsigned int		from_address;
	unsigned int		from_port;
	int			n;
	int			sent;

	if ( ( sockfd = socket ( AF_INET, SOCK_DGRAM, IPPROTO_UDP ) ) < 0 )
	{
		fprintf ( stderr, "Error create socket ( %d )\n", -1 );
		exit ( -1 );
	}

	address.sin_family = AF_INET;
	address.sin_addr.s_addr = INADDR_ANY;
	address.sin_port = htons ( ( unsigned short ) 8080 );

	if ( bind ( sockfd, ( const struct sockaddr * ) &address, sizeof ( struct sockaddr_in ) ) < 0 )
	{
		fprintf ( stderr, "Error to bind socket ( %d )\n", -1 );
		exit ( -1 );
	}

	if ( fcntl ( sockfd, F_SETFL, O_NONBLOCK, nonBlock ) == -1 )
	{
		fprintf ( stderr, "Fault to unblock socket ( %d )\n", -1 );
		exit ( -1 );
	}

	if ( ( sent = sendto ( sockfd, ( const char * ) "Hello world!", sizeof ( "Hello world!" ), 0, ( struct sockaddr * ) &address, sizeof ( struct sockaddr_in ) ) ) != sizeof ( "Hello world!") )
	{
		fprintf ( stderr, "Error send msg ( %d )\n", -1 );
		exit ( -1 );
	}

	while ( 1 )
	{
		max_size_pkt = sizeof ( buff );
		Len = sizeof ( from );
		
		if ( ( n = recvfrom ( sockfd, ( char * )buff, max_size_pkt, 0, ( struct sockaddr * ) &from, &Len ) ) <= 0 )
		{
			printf ( "%s\n", buff );
			break;
		}

		from_address = ntohl ( from.sin_addr.s_addr );
		from_port = ntohs ( from.sin_port );
	}

	close ( sockfd );

	return 0;
}
