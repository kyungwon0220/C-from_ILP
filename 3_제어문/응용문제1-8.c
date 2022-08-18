#include <stdio.h>

main() {
	int i, n=10000, pay;
	
	for(pay=0, i=0; i<30; i++)
		pay += n + (i*1000);
		
	printf("Pay = %d \n", pay);
}
