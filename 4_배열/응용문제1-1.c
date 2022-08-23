#include <stdio.h>

main() {
	int i, max, min, n[10];
	
	for(i=0; i<10; i++)
		scanf("%d", &n[i]);
		
	max = min = n[0];
		
	for(i=1; i<10; i++) {
		if(max<n[i])
			max = n[i];
		if(min>n[i])
			min = n[i];
	}
	
	printf("최대값 = %d, 최소값 = %d\n",max, min); 
}
