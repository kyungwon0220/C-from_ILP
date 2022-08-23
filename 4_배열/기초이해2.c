#include <stdio.h>

main() {
	int i, sum, n[6];
	
	for(i=0; i<6; i++)
		scanf("%d", &n[i]);
	
	for(sum=0, i=0; i<6; i++)
		sum += n[i];
	
	printf("재학생수=%d\n", sum); 
}
