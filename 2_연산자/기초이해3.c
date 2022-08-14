#include <stdio.h>

main() {
	int x = 3, y = 4, z = 5, n = 6;
	printf("%d\n", x>y);
	printf("%d, %d, %d\n", y<z, y!=z, y==z);
	printf("%d, %d, %d\n", !0, !1, !x);
	printf("%d\n", x>y&&y<z);
	printf("%d\n", x<y||y>z);
	//
}
