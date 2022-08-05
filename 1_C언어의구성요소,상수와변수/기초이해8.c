#include <stdio.h>

main() {
	float f;
	scanf("%f",&f);
	printf("정수부분=%d, 소수부분=%f",(int)f , f-(int)f); 
}
