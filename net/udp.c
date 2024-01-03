#include <string.h>
#include <stdio.h>
#include "udp.h"
#include "ip.h"

//void udp_fill_header ( uint8_t *buff, uint32_t saddr, uint32_t daddr, uint16_t sport, uint16_t dport, size_t len )
//{
//	struct _efr_udp_ *eu = ( struct _efr_udp_ * ) buff;
//	struct _udp_hdr_ *uh = ( struct _udp_hdr * ) eu->uh;
//	
//	uh -> src = sport;
//	uh -> dst = dport;
//	uh -> len = ( uint16_t ) ( len + UDP_HEADER_LEN );
//	uh -> crc = 0;
//
//	uh -> crc = __udp_crc ( saddr, daddr, uh );
//
//	uh -> src = ( uint16_t ) htons ( uh -> src );
//	uh -> dst = ( uint16_t ) htons ( uh -> dst );
//	uh -> len = ( uint16_t ) htons ( uh -> len );
//	uh -> crc = ( uint16_t ) htons ( uh -> crc );
//}
