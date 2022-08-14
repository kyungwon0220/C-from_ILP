#include <stdio.h>

main() {
	int a = 2;
	int b = 2, c = 3;
	
	c(!(a-b) ? c+a : c-b);
	printf("c = %d", c);
	//
}
