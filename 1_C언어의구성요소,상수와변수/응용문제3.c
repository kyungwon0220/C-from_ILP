#include <stdio.h>

main() {
	char c;
	int i;
	float f;
	double ff;
	
	short si;
	long li;
	unsigned int ui;
	unsigned char uc;
	
	printf("%d,%d,%d,%d,%d,%d,%d,%d\n",sizeof(c),sizeof(i),sizeof(f),sizeof(ff),sizeof(si),sizeof(li),sizeof(ui),sizeof(uc));
}
