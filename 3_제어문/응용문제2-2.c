#include <stdio.h>

main() {
	int gross, net;
	float tax;
	
	printf("enter your gross:");
	scanf("%d", &gross);
	
	if(gross < 1000) tax = 0;
	else if(gross >= 1000 && gross < 3000) tax = (gross - 1000) * 0.01;
	else if(gross >= 3000 && gross < 5000) tax = ((gross - 3000) * 0.03) + 20;
	else tax = ((gross - 5000) * 0.06) + 80;
	
	net = gross - tax;
	
	printf("Your Net = %d \n", net);
}
