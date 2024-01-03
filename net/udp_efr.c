/******************************//*!
 * \file
 * \brief	
 * \author	Igor Bedarev
 */

#include "ethernet.h"
#include "udp.h"
#include "ip.h"
#include "udp_efr.h"
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdint.h>



void udp_request ( int8_t *buff )
{
	struct _efr_udp_ 	*efr = NULL;
	uint32_t		sb = strlen ( buff );
	
	memcpy ( efr->pu, buff, sb );
	ether_fill_header ( efr->eh );
	ip_fill_header ( efr->ih, IP_HLEN + UDP_HLEN + sb );
	//udp_fill_header ( &efr->uh, UDP_HLEN + sb );


}
