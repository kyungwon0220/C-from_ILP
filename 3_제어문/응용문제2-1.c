#include <stdio.h>

main() {
	//rpay: 50�ð������� �޷�, opay: �ʰ��ð� �޷�, tpay: ��ü �޷�
	int hour, rate, rpay, opay, tpay;
	
	printf("�ٹ��ð�:");
	scanf("%d", &hour);
	printf("�ð��� ����:");
	scanf("%d", &rate);
	
	if(hour<=50) {
		rpay = hour * rate;
		opay = 0;
	} else if(hour>50) {
		rpay = 50 * rate;
		opay = (hour-50) * (rate * 1.5);
	}
	
	tpay = rpay + opay;
	
	printf("�޷� = %d\n", tpay); 
}
