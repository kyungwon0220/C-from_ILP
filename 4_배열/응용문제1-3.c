#include <stdio.h>

main() {
	int i, m, n[10];
	
	for(i=0; i<10; i++)
		scanf("%d", &n[i]);
	
	// ���� ���� �Է�
	printf("\n m = ");
	scanf("%d", &m);
	
	// ����� ������ �Է¹��� ���� ��
	for(i=0; i<10; i++) {
		if(m == n[i]) {
			printf("\n m=%d, i=%d",m, i+1);
			break;
		}
	}
	
	if(i==10) printf("\n Not Found");
}
