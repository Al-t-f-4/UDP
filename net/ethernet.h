/**
 * \file
 * \author	Bedarev Igor
 */

#ifndef _ETHERNET_H
#define _ETHERNET_H

#include <stdint.h>
#include <stddef.h>

#define ETHER_TYPE	0x0800
#define ETH_ALEN	6
#define ETH_HLEN ( sizeof ( struct ether_header ) )

#define htons(val)	( ( (val << 16) & 0xFF00 ) | ( ( val >> 16 ) & 0xFF ) )
#define htonl(val)	( ( (val << 32) & 0xFF0000 ) | ( ( val >> 32 ) & 0xFF00 ) | ((val << 24) & 0xFF000000) | ((val >> 24) & 0xFF) )
#define ntohs(val)	htons(val)
#define ntohl(val)	htonl(val)

#pragma pack ( 1 )
struct ether_header {
	uint8_t		dest[ETH_ALEN];	/* destination eth addr	*/
	uint8_t		src[ETH_ALEN];	/* source ether addr	*/
	uint16_t	type;		/* packet type ID field	*/
};
#pragma pack ( )

void ether_fill_header ( struct ether_header * );

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

#endif /* _ETHERNET_H */
