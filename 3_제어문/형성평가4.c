/*
������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
10 9 8 7 6 5 4 3 2 1
10 9 8 7 6 5 4 3
10 9 8 7 6 5
10 9 8 7
10 9 
*/
#include <stdio.h>

main() {
	for(int i=0; i<5; i++) {
		for(int j=10; j>i*2; j--)
			printf("%d\t", j);
		printf("\n");
	}
}
