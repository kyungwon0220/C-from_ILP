#include <stdio.h>

main() {
	float f1, f2, f3;
	
	scanf("%f%f", &f1, &f2);
	
	f3 = f1 + f2;
	
	printf("정수부분=%d, 소수부분=%f\n",(int)f3, f3-(int)f3); 
}
