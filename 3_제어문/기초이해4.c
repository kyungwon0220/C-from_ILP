#include <stdio.h>

main() {
	int i;
	
	scanf("%d", &i);
	
	if(i%2==0 && i%3==0) printf("%d��2��3�ǹ����\n", i);
	else if(i%3==0) printf("%d��3�ǹ����\n", i);
	else if(i%2==0) printf("%d��2�ǹ����\n", i);
	else printf("%d��2�ǹ����3�ǹ�����ƴϴ�\n", i); 
}
