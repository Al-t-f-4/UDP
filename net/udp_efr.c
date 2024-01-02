/******************************//*!
 * \file
 * \brief	Описание
 * \author	Igor Bedarev
 */

#include "udp.h"
#include "ip.h"
#include "udp_efr.h"


void udp_request ( uint8_t *buff )
{
	struct ether_header *eh = ( ether_header * ) buff;
	
	printf ( "HELLO\n");
}
