#include <stdio.h>

main() {
	int n, m;
	char op;
	
	printf("연산자 입력(+,-,*,/):");
	op = getchar();
	
	printf("두 정수 입력:");
	scanf("%d%d", &n, &m);
	
	switch(op) {
		case '+':
			printf("%d+%d=%d",n,m,n+m);
			break;
		case '-':
			printf("%d-%d=%d",n,m,n-m);
			break;
		case '*':
			printf("%d*%d=%d",n,m,n*m);
			break;
		case '/':
			printf("%d/%d=%d",n,m,n/m);
			break;
		default: 
		printf("없는 연산자입니다."); 
	}
}
