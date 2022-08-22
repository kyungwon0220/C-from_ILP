#include <stdio.h>

main() {
	int score, grade;
	while(1) {
		scanf("%d", &score);
		if(score<0 || score>100)
			break;
		switch(score/10) {
			case 10:
			case 9:
				grade = 'A';
				break;
			case 8:
				grade = 'B';
				break;
			case 7:
				grade = 'C';
				break;
			default:
				grade = 'F';
				break;
		}
		putchar(grade);
	}
}
