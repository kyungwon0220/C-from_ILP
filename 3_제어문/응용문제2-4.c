#include <stdio.h>

main() {
	int c, flag=0;
	
	while( (c=getchar()) != EOF ) {
		if(c == 32) { // 32 == �ƽ�Ű �ڵ� for ' '
			if(flag == 0) {
				printf("%c", ' ');
				flag++;
			}
		} else {
			printf("%c", c);
			flag=0;
		}
	}
}
