/*
1+2+3+....+n���� Ű����� �Է��� �� max ���� ���� ���� ū n ���� ���ϴ� ���α׷���
while���� �̿��� �ۼ��� ���ô�. ���� for���� �̿��� �ۼ��� ���ô�. 
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
