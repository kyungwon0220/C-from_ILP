#include <stdio.h>

main() {
	char sex;
	int age;
	
	scanf("%c%d", &sex, &age);
	if(age>=20) {
		if(sex == 'M') printf("���尡��%d", 20000+1000*(age-20));
		else if(sex == 'F') printf("���尡��%d", 10000+1000*(age-20));
	} else printf("����Ұ�\n"); 
}
