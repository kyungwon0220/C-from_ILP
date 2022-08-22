/*
다음과 같이 출력하는 프로그램을 작성하시오.
10 9 8 7 6 5 4 3 2 1
 10 9 8 7 6 5 4 3
   10 9 8 7
    10 9
*/
#include <stdio.h>

main() {
	for(int i=5; i>0; i--) {
		for(int j=0; j<5-i; j++)
			printf("\t");
		for(int j=10; j>10-(i*2); j--)
			printf("%d\t", j);
		printf("\n");
	}
}
