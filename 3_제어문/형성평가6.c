/*
��� ���� ������ ����ᰡ ������ ���� �� ����Ḧ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
15�� ���� 10000��, 20�� �̸� 15000��, 20�� �̻� 20000��
���ȸ���� ��� 30% ����
(��)
���̸� �Է��ϼ���? 21
���ȸ���Դϱ�? n

����� : 20000���Դϴ�. 
*/
#include <stdio.h>

main() {
	int age;
	char yn;
	int answer = 0;
	
	printf("���̸� �Է��ϼ���?");
	scanf("%d", &age);
	printf("���ȸ���Դϱ�?");
	scanf(" %c", &yn);
	
	if(age>=20) answer = 20000;
	else if(age<20 && age > 15) answer = 15000;
	else if(age<=15) answer = 10000;
	
	if(yn == 'y') answer *= 0.7;
	
	printf("����� : %d���Դϴ�.", answer); 
}
