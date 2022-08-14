#include <stdio.h>

main() {
	int x, y, z;
	x= 1; y = 2;
	z = x++;
	printf("x = %d, y = %d, z = %d\n", x, y, z);
	z = ++x - y--;
	printf("x = %d, y = %d, z = %d\n", x, y, z);
	//
}
