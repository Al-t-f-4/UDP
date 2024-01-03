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


void udp_request ( int8_t *buff )
{
	struct ether_header *eh = ( struct ether_header * ) buff;
	
	printf ( "HELLO\n");
}
