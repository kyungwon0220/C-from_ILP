#include <stdio.h>

main() {
	int i, n;
	
	printf("양의정수입력:");
	scanf("%d", &n);
	
	//for(i=0; i<n; i++) printf("%d,", 3*(i+1));
	
	i=0;
	while(i<n) {
		printf("%d, ", 3*(i+1));
		i++;
	}
}
