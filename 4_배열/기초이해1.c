#include <stdio.h>

main() {
	int i, ave, sum, n[10];
	
	// ���� �Է� �ޱ�
	for(i=0; i<10; i++)
		scanf("%d", &n[i]);
	
	// �� ���ϱ�
	for(sum=0, i=0; i<10; i++)
		sum += n[i];
	
	ave = sum / 10;
	
	printf("�� = %d, ��� = %d\n", sum, ave);
}
