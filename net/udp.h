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
	uint8_t		src;
	uint8_t		dst;
	uint8_t 	len;
	uint8_t 	crc;
	uint16_t 	data[];
};
#pragma pack ( )

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif
