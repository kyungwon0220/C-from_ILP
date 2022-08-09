#include <stdio.h>

main() {
	int i;
	double f1, f2, f3;
	
	scanf("%lf%lf", &f1, &f2);
	
	i = f1 + f2;
	f3 = f1 + f2 - i;
	
	printf("%d, %lf", i, f3); 
}
