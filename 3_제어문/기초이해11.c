#include <stdio.h>

main() {
	int i, n;
	
	printf("���������Է�:");
	scanf("%d", &n);
	
	//for(i=0; i<n; i++) printf("%d,", 3*(i+1));
	
	i=0;
	while(i<n) {
		printf("%d, ", 3*(i+1));
		i++;
	}
}
