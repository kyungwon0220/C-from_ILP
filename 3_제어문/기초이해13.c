#include <stdio.h>

main() {
	int i, sum;
	
	for(i=1, sum=0; i<=20; i++) sum+= i;
	
	printf("%d ", sum);
}
