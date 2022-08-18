#include <stdio.h>

main() {
	int m, n;
	scanf("%d%d", &m, &n);
	if( ((m>0)?m:-m) > ((n>0)?n:-n) )
		printf("%d", m);
	else
		printf("%d", n);
}
