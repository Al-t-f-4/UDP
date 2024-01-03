#include "ip.h"
#include "udp.h"
#include "ethernet.h"

void ip_fill_header ( struct _ip_hdr_ *ih, uint16_t len )
{

	ih -> ihl = 0x05;
	ih -> version = IP_V4;
	ih -> tos = 0;
	ih -> id = 0x4173;
	ih -> off_h = 0;
	ih -> flags = 0x2;
	ih -> off_l = 0;
	ih -> ttl = 64;
	ih -> proto = IP_TRANS_UDP;
	ih -> csum = 0;
	ih -> saddr = ( uint32_t ) htonl ( SRC_ADR );
	ih -> daddr = ( uint32_t ) htonl ( DEST_ADR );
	ih -> len = ( uint16_t ) htonl ( IP_HLEN + len );

}
