/*
10에서 50사이의 정수 중 4의 배수의 개수와 총합을 찾는 프로그램을 작성하시오. 
*/
#include <stdio.h>

main() {
	int count = 0;
	int sum = 0;
	
	for(int i=10; i<50; i++) {
		if(i%4 == 0) { // 4의 배수인 경우 
			count++; // 4의 배수의 개수 count 
			sum += i; // 4의 배수의 총합 
		}
	}
}
