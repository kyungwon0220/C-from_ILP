#include <stdio.h>

main() {
	int n;
	
	printf("�������ϳ��������ϼ���.\n");
	printf("1.apple\n"); 
	printf("2.orange\n"); 
	printf("3.banana\n"); 
	printf("4.peach\n"); 
	printf(" �����ѹ�ȣ���Է��ϼ���:");
	scanf("%d", &n);
	printf("--------------\n");
	switch(n) {
		case 1:
			printf("�����\"apple\"�������Ͽ����ϴ�.\n");
			break;
		case 2:
			printf("�����\"orange\"�������Ͽ����ϴ�.\n");
			break;
		case 3:
			printf("�����\"banana\"�������Ͽ����ϴ�.\n");
			break;
		case 4:
			printf("�����\"peach\"�������Ͽ����ϴ�.\n");
			break;
		}			
}
