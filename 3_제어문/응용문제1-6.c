#include <stdio.h>

main() {
	int n, sum, max;
	
	scanf("%d", &max);
	
	n = 0; sum = 0;
	
	while(sum<max) {
		n++;
		sum += n;		
	}
	
	printf("\nn = %d", n);
}
