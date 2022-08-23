#include <stdio.h>

main() {
	int i, j, n[3][3];
	
	for(i=0 ;i<3; i++) {
		for(j=0; j<3; j++)
			scanf("%d", &n[i][j]);
	}
	
	for(i=0; i<3; i++) {
		for(j=0 ;j<3; j++) {
			n[i][j] *= n[i][j];
			printf("%d\t", n[i][j]);
		}
		
		printf("\n");
	}	
}
