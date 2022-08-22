/*
1+2+3+....+n값이 키보드로 입력한 값 max 보다 작은 가장 큰 n 값을 구하는 프로그램을
while문을 이용해 작성해 봅시다. 또한 for문을 이용해 작성해 봅시다. 
*/
#include <stdio.h>

main() {
	int max = 0;
	int n = 0;
	
	scanf("%d", &max);
	
	for(int i=1; i<max; i++) {
		n += i;
		if(n>=max) {
			printf("%d", i-1);
			break;
		}
	}
}
