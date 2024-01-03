#include <string.h>
#include <stdio.h>
#include "udp.h"
#include "ip.h"

void udp_fill_header ( struct _udp_hdr_ *uh, uint16_t len )
{
	
	uh -> src = SRC_ADR;
	uh -> dst = DEST_ADR;
	uh -> len = ( uint16_t ) ( len );
	uh -> crc = 0;

}
