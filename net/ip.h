/**
    \file
    \author	Igor Bedarev
*/
#ifndef _IP_H
#define _IP_H

#include <stdint.h>
#include <stddef.h>

#define IP_V4 			0x04
#define IP_TRANS_UDP	 	0x11
#define SRC_ADR			0x3542
#define DEST_ADR		0x3254


#define IP_HLEN ( sizeof ( struct _ip_hdr_ ) )

#pragma pack ( 1 )
struct _ip_hdr_ {
	uint8_t		ihl : 4;
	uint8_t		version : 4;
	uint8_t		tos;
	uint16_t	len;
	uint16_t	id;
	uint8_t		off_h : 5;
	uint8_t		flags : 3;
	uint8_t		off_l;
	uint8_t		ttl;
	uint8_t		proto;
	uint16_t	csum;
	uint32_t	saddr;
	uint32_t	daddr;
	uint8_t		data[];
};
#pragma pack ( )

/*
 	Function declaration
*/

void ip_fill_header ( struct _ip_hdr_ *, uint16_t );

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

#endif
