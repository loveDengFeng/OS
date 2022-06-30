#define NE_DATAPORT 0x10
#define NE_IOBASE 0xc020 
#include <linux/ne2k.h>

void  get_mac_address(void)
{
	/*
	int j;
	int prom[6];
	for(j=0;j<13;j++){
		int tmp=inb(NE_IOBASE+NE_DATAPORT);
		if(j&1){
			prom[(j-1)/2]=tmp;
			printk("%d : ",tmp);
		}
	}
	*/
    printk("run mac!\n");
}

/*
struct ne ne2k;
#define NE_PAGE_SIZE 256
#define NE_TXBUF_SIZE 4
#define NE_TX_BUFERS 2
void ne2k_init()
{
	ne2k.iobase=NE_IOBASE;
	ne2k.irq=NE_IRQ;
	ne2k.membase=16*1024;
	ne2k.memsize=16*1024;
	ne2k.rx_page_start=ne2k.membase/NE_PAGE_SIZE;
	ne2k.rx_page_stop=ne2k.rx_page_start+ne2k.memesize/NE_PAGE_SIZE-NE_TXBUF_SIZE*NE_TX_BUFERS;
	ne2k.next_packet=ne2k.rx_page_start+1;
}
*/