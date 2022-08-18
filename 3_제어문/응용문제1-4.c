#include <stdio.h>

main() {
	int s1, s2, s3, mean, total;
	
	printf("점수 입력(3 과목):");
	scanf("%d%d%d", &s1, &s2, &s3);
	
	total = s1 + s2 + s3;
	mean = total / 3;
	
	if(mean >= 60) {
		if(s1 > 40 && s2 > 40 && s3 > 40) printf("Success");
		else printf("SubjectFailure");
	} else printf("Failure");
}
