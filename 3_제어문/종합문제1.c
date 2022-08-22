#include <stdio.h>

main() {
	int i, n, sum;
	
	while(1) {
		scanf("%d", &n);
		if(n==0)
			break;
		else if(n<0)
			continue;
		else {
			for(sum=0, i=1; i<=n; i++)
				sum+= i;
			printf("1+..+%d = %d \n", n, sum);
		}
	}
}
