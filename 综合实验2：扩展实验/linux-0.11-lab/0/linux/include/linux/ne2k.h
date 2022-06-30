struct macaddr{
	unsigned char bytes[6];
};

struct ne{
	unsigned short iobase;
	unsigned short irq;
	unsigned short membase;
	unsigned short memsize;
	unsigned char rx_page_start;
	unsigned char rx_page_stop;
	unsigned char next_packet;
	struct macaddr paddr;
};





void get_mac_address(void);