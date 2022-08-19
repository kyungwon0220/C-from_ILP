#include <stdio.h>

main() {
	//rpay: 50시간까지의 급료, opay: 초과시간 급료, tpay: 전체 급료
	int hour, rate, rpay, opay, tpay;
	
	printf("근무시간:");
	scanf("%d", &hour);
	printf("시간당 수당:");
	scanf("%d", &rate);
	
	if(hour<=50) {
		rpay = hour * rate;
		opay = 0;
	} else if(hour>50) {
		rpay = 50 * rate;
		opay = (hour-50) * (rate * 1.5);
	}
	
	tpay = rpay + opay;
	
	printf("급료 = %d\n", tpay); 
}
