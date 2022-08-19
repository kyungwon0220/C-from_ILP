#include <stdio.h>

main() {
	/*
	//(1/3)
	int i;
	long int n;
	
	for(n=0, i=1; i<100; i++)
		n += i*(i+1);
		
	printf("1*2+2*3+...+99*100 = %d \n", n);
	*/
	
	
	/*
	//(2/3)
	int i, j, n;
	long result;
	
	for(result=0, i=0; i<50; i++, n=0) {
		for(j=0; j<=i+1; j++)
			n += j;
		result += n;
	}
	
	printf("1+(1+2)+(1+2+3)+...+(1+2+..+50) = %d \n", result);
	*/
	
	
	//(3/3)
	int i, j;
	long n, result;
	
	for(result=0, i=1; i<=10; i++, n=1) {
		for(j=1; j<i+1; j++)
			n *= j;
		result += n;
	}
	
	printf("1+(1*2)+(1*2*3)+...+(1+*2*..*10) = %d \n", result);
}
