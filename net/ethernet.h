/**
 * \file
 * \author	Bedarev Igor
 */

#ifndef _ETHERNET_H
#define _ETHERNET_H

#define ETHERTYPE	0x0800

#define ETH_ALEN	6
#define ETH_HLEN ( sizeof ( struct ethernet_header ) )

#define htons(val)	( ( (val << 8) & 0xFF00 ) | ( ( val >> 8 ) & 0xFF ) )
#define htonl(val)	( ( (val << 8) & 0xFF0000 ) | ( ( val >> 8 ) & 0xFF00 ) | ((val << 24) & 0xFF000000) | ((val >> 24) & 0xFF) )
#define ntohs(val)	htons(val)
#define ntohl(val)	htonl(val)

struct ether_header {
	unsigned char	ether_dhost[ETH_ALEN];	/* destination eth addr	*/
	unsigned char	ether_shost[ETH_ALEN];	/* source ether addr	*/
	unsigned short	ether_type;		/* packet type ID field	*/
};

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

#endif /* _ETHERNET_H */
