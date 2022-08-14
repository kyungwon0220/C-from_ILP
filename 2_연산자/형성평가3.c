#include <stdio.h>

main() {
	int m;
	
	scanf("%d", &m);
	
	printf("%s", (m%2==0) ? "2의배수임" : "2의배수아님"); 
}
