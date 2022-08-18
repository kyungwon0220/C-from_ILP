#include <stdio.h>

main() {
	int i, j;
	
	for(i=0; i<=15/2; i++) {
		for(j=0; j<=i*2; j++)
			printf("*");
			
		printf("\n");
	}
}
