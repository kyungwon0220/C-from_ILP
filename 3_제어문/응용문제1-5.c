#include <stdio.h>

main() {
	int n, m;
	char op;
	
	printf("������ �Է�(+,-,*,/):");
	op = getchar();
	
	printf("�� ���� �Է�:");
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
		printf("���� �������Դϴ�."); 
	}
}
