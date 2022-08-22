/*
변수 x와 y에 값을 입력받아 비교하여, x의 값이 y값 보다 큰 경우에 "x의 값이 y의 값
보다 큽니다."를 출력하고 x의 값이 y의 값보다 작은 경우는 "x의 값이 y의 값 보다 작
습니다."를 두수가 같을 경우에는 "x와 y의 값이 같습니다."ㄹ를 출력하는 프로그램을
작성하시오. 
*/
#include <stdio.h>

main() {
	int x, y;
	
	scanf("%d%d", &x, &y);
	
	if(x>y) printf("x의 값이 y의 값 보다 큽니다.");
	else if(x<y) printf("x의 값이 y의 값 보다 작습니다.");
	else printf("x와 y의 값이 같습니다."); 
}
