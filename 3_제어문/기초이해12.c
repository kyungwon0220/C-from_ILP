#include <stdio.h>

main() {
	int i, j;
	
	printf("정수입력(2~9):");
	scanf("%d", &i);
	for(j=1; j<=9; j++) printf("%d*%d=%d\t",i, j, i*j);
}
