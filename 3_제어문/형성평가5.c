/*
������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15 
*/
#include <stdio.h>

main() {
	static int n = 1; 
	for(int i=5; i>0; i--) {
		for(int j=0; j<=5-i; j++)
			printf("%d\t", n++);
		printf("\n");
	}
}
