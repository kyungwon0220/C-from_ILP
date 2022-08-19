#include <stdio.h>

main() {
	int i, j, k;
	
	for(i=0, k=1; i<=10; i++, k+=i) {
		printf("%d\t:",k);
		for(j=0; j<k; j++)
			printf("*");
		printf("\n");
	}
}
