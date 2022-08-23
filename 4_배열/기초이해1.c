#include <stdio.h>

main() {
	int i, ave, sum, n[10];
	
	// 정수 입력 받기
	for(i=0; i<10; i++)
		scanf("%d", &n[i]);
	
	// 합 구하기
	for(sum=0, i=0; i<10; i++)
		sum += n[i];
	
	ave = sum / 10;
	
	printf("합 = %d, 평균 = %d\n", sum, ave);
}
