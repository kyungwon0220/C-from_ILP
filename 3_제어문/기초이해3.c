#include <stdio.h>

main() {
	char sex;
	int age;
	
	scanf("%c%d", &sex, &age);
	if(age>=20) {
		if(sex == 'M') printf("입장가능%d", 20000+1000*(age-20));
		else if(sex == 'F') printf("입장가능%d", 10000+1000*(age-20));
	} else printf("입장불가\n"); 
}
