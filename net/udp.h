/**
   \file
   \author Bedarev Igor
*/
#ifndef _UDP_H
#define _UDP_H

#include <stdint.h>
#include <stddef.h>

#define UDP_HLEN	( sizeof( struct _udp_hdr_ ) )

#pragma pack ( 1 )
struct _udp_hdr_ {
	uint32_t		src;
	uint32_t		dst;
	uint16_t 		len;
	uint16_t 		crc;
};
#pragma pack ( )

void udp_fill_header ( struct _udp_hdr_ *, uint16_t );

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif
