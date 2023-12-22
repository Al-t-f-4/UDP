/******************************//*!
 * \file
 * \brief	Описание
 * \author
 * \date	Создан:
 * \date	Изменён:
 */

#include "udp.h"
#include "ip.h"
#include "udp_efr.h"

char 	buff[MTU] = { "Hui" };

static void __eth_fill_header ( uint8_t *buff, uint8_t saddr, uint8_t daddr, uint16_t type )
{
	struct ether_header *eh = ( struct ether_header * ) buff;
	eh -> ether_type = type;
	eh -> ether_dhost = ( uint8_t ) daddr;
	eh -> ether_shost = ( uint8_t ) saddr;
}

void udp_request ( void )
{
	uint32_t *saddr = 3232253185;
	uint32_t *daddr = 3232253253;
	struct ether_header *eh = ( ether_header * ) buff;
	
	__eth_fill_header ( buff, saddr, daddr, ETHERTYPE );
	ip_fill_header ( saddr, daddr, buff, len );
	udp_fill_header ( buff, saddr, daddr, sport, dport, len );
	printf ( "HELLO\n");
//	i210_push

}
