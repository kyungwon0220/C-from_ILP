#include <stdio.h>

main() {
	int i;
	
	scanf("%d", &i);
	
	if(i%2==0 && i%3==0) printf("%d는2와3의배수다\n", i);
	else if(i%3==0) printf("%d는3의배수다\n", i);
	else if(i%2==0) printf("%d는2의배수다\n", i);
	else printf("%d는2의배수도3의배수도아니다\n", i); 
}
