#include <stdio.h>

main() {
	int m, n;
	printf("두개의 정수 입력:");
	scanf("%d%d", &m, &n);
	
	if(m>n) printf("%d - %d = %d", m, n, m-n);
	else printf("%d - %d = %d", n, m, n-m);
}
