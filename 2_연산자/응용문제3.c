#include <stdio.h>

main() {
	float f;
	scanf("%f", &f);
	printf("%f", (f>0) ? f : -f);
}
