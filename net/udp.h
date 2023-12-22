/**
   \file
   \author Bedarev Igor
*/
#ifndef _UDP_H
#define _UDP_H

#include <stdint.h>
#include <stddef.h>

/*
	Macros definition
*/

#define UDP_HLEN	( sizeof( struct _udp_hdr_ ) )

/*
 	Type declaration
*/
/*
 	Data declaration
*/


#pragma pack ( 1 )
struct _udp_hdr_ {
	unsigned char	src;
	unsigned char	dst;
	unsigned char 	len;
	unsigned char 	crc;
	unsigned short 	data[];
};
#pragma pack ( )

/*
 	Function declaration
*/

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif
