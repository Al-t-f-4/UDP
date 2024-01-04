#include "ethernet.h"

void ether_fill_header ( struct ether_header *eth )
{
	eth->dest[0] = 0x00;
	eth->dest[1] = 0x01;
	eth->dest[2] = 0x02;
	eth->dest[3] = 0x03;
	eth->dest[4] = 0x04;
	eth->dest[5] = 0x05;
	
	eth->src[0] = 0x06;
	eth->src[1] = 0x07;
	eth->src[2] = 0x08;
	eth->src[3] = 0x09;
	eth->src[4] = 0x10;
	eth->src[5] = 0x11;

	eth->type = ETHER_TYPE;
}
