#include <stdio.h>

main() {
	int i, m, n, sum;
	
	printf("양의정수입력(두개):");
	scanf("%d%d", &m, &n);
	
	//for(i=m, sum=0; i<=n; i++) sum+= i;
	
	sum=0, i=m;
	while(i <= n) {
		sum+= i;
		i++;
	}
	printf("%d\n", sum); 
}
