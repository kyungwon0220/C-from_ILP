#include <stdio.h>

main() {
	int m, n;
	float f, g;
	
	scanf("%d%d", &m, &n);
	scanf("%f%f", &f, &g);
	
	printf("%d+%d=%d\n",m, n, m+n);
	printf("%f+%f=%f",f, g, f+g);
}
