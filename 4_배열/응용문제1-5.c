#include <stdio.h>

main() {
	int i, j, n[7];
	
	for(i=0; i<7; i++)
		scanf("%d", &n[i]);
	
	for(i=0; i<7; i++) {
		printf("%2d : ", n[i]);
		
		for(j=0; j<n[i]; j++)
			printf("*");
		
		printf("\n");
	}
}
