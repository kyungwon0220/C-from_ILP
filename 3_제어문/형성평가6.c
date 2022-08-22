/*
어느 놀이 공원의 입장료가 다음과 같을 때 입장료를 계산하는 프로그램을 작성하시오.
15세 이하 10000원, 20세 미만 15000원, 20세 이상 20000원
우수회원인 경우 30% 할인
(예)
나이를 입력하세요? 21
우수회원입니까? n

입장료 : 20000원입니다. 
*/
#include <stdio.h>

main() {
	int age;
	char yn;
	int answer = 0;
	
	printf("나이를 입력하세요?");
	scanf("%d", &age);
	printf("우수회원입니까?");
	scanf(" %c", &yn);
	
	if(age>=20) answer = 20000;
	else if(age<20 && age > 15) answer = 15000;
	else if(age<=15) answer = 10000;
	
	if(yn == 'y') answer *= 0.7;
	
	printf("입장료 : %d원입니다.", answer); 
}
