#include <stdio.h>

main() {
	int a = 12;
	int b = 23;
	int c, d, e;
	
	c = a^b;
	d = ~a;
	e = a<2;
	printf("12 XOR 23 ���� ��� : %d\n", c);
	printf("NOT  12 ���� ��� : %d\n", d);
	printf("12<<2 ���� ��� : %d\n", e);
	// 
}
