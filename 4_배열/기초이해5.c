#include <stdio.h>

main() {
	int i, m, n[9];
	
	scanf("%d", &m);
	
	for(i=0; i<9; i++)
		n[i] = m*(i+1);
	
	for(i=0; i<9; i++)
		printf("%d* %d= %d\n", m, i+1, n[i]);
}
