#include "ip.h"
#include "udp.h"

//static uint32_t __sum16 ( void *addr, int count )
//{
//	
//}
//
//
//
//static uint16_t __checksum_ip ();








//void ip_fill_header ( uint32_t saddr, uint32_t daddr, uint8_t *buff, size_t len )
//{	
//	struct _efr_udp_ *eu = ( struct _eth_udp_ * ) buff;
//	struct _id_hdr_	*ih = (struct _ip_hdr_ * ) eh->ih;
//
//	ih -> ihl = 0x05;
//	ih -> version = IP_V4;
//	ih -> tos = 0;
//	ih -> id = 0x4173;
//	ih -> off_h = 0;
//	ih -> flags = 0x2;
//	ih -> off_l = 0;
//	ih -> ttl = 64;
//	ih -> proto = IP_TRANS_UDP;
//	ih -> csum = 0;
//	ih -> saddr = ( uint32_t ) htonl ( saddr );
//	ih -> daddr = ( uint32_t ) htonl ( daddr );
//	ih -> len = ( uint16_t ) htons ( sizeof ( struct _ip_hdr_ ) + len );
//
//	//ih->csum = __checksum_ip ( );
//}
