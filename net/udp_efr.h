/**
 * \file
 * \author	Igor Bedarev
 */

#ifndef _UDP_EFR_H
#define _UDP_EFR_H

#include "ethernet.h"
#include "udp.h"
#include "ip.h"
#include <stdint.h>
#include <stddef.h>

/*
 *	Macros definition
 */

#define MTU			1516
#define EFR_DATA_UDP_MAX	( MTU - ETH_HLEN + IP_HLEN + UDP_HLEN )
#define EFR_DATA_UDP_LEN(n)	( ETH_HLEN + IP_HLEN + UDP_HEN * n ) 

/*
 *	Type declaration
 */

#pragma pack(1)
/* Ethernet FRAME */
struct _efr_udp_ {
	struct ether_header		*eh;
	struct _ip_hdr_			*ih;
	struct _udp_hdr_		*uh;
	char payload_udp		pu[EFR_DATA_UDP_MAX];
};
#pragma pack()
/*
 *	Data declaration
 */


/*
 *	Function declaration
 */

#ifdef __cplusplus
extern "C" {
#endif

void udp_request ( uint8_t * );


#ifdef __cplusplus
}
#endif

#endif /* _UDP_EFR_H */

