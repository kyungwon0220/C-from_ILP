#include <stdio.h>

main() {
	int n;
	
	printf("정수입력:");
	scanf("%d", &n);
	
	if(n%2==0) printf("Even");
	else printf("Odd"); 
}
