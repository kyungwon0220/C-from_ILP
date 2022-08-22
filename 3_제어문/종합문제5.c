#include <stdio.h>

main() {
	int i, j;
	
	for( i=0; i<5; i++) {
		for(j=4-i; j>0; j--) printf(" ");
		for(j=0; j<=i*2; j++) printf("*");
		printf("\n");
	}	
	
	for(i=4; i>0; i--) {
		for(j=4-i; j>=0; j--) printf(" ");
		for(j=i*2; j>1; j--) printf("*");
		printf("\n");
	}
}
