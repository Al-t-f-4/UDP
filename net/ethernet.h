/**
 * \file
 * \author	Bedarev Igor
 */

#ifndef _ETHERNET_H
#define _ETHERNET_H

#include <stddef.h>

#define ETHERTYPE	0x0800
#define ETH_ALEN	6
#define ETH_HLEN ( sizeof ( struct ethernet_header ) )

#define htons(val)	( ( (val << 8) & 0xFF00 ) | ( ( val >> 8 ) & 0xFF ) )
#define htonl(val)	( ( (val << 8) & 0xFF0000 ) | ( ( val >> 8 ) & 0xFF00 ) | ((val << 24) & 0xFF000000) | ((val >> 24) & 0xFF) )
#define ntohs(val)	htons(val)
#define ntohl(val)	htonl(val)

#pragma pack ( 1 )
struct ether_header {
	uint8_t		ether_dhost[ETH_ALEN] : 6;	/* destination eth addr	*/
	uint8_t		ether_shost[ETH_ALEN] : 6;	/* source ether addr	*/
	uint8_t		ether_type : 2;			/* packet type ID field	*/
};
#pragma pack ( )

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

#endif /* _ETHERNET_H */
