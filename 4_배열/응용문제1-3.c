#include <stdio.h>

main() {
	int i, m, n[10];
	
	for(i=0; i<10; i++)
		scanf("%d", &n[i]);
	
	// 비교할 정수 입력
	printf("\n m = ");
	scanf("%d", &m);
	
	// 저장된 정수와 입력받은 정수 비교
	for(i=0; i<10; i++) {
		if(m == n[i]) {
			printf("\n m=%d, i=%d",m, i+1);
			break;
		}
	}
	
	if(i==10) printf("\n Not Found");
}
