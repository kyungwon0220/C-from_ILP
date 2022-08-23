#include <stdio.h>

main() {
	
	//e_num : Â¦¼ö °³¼ö e_sum : Â¦¼ö ÇÕ  o_num : È¦¼ö °³¼ö o_sum : È¦¼ö ÇÕ
	int i, j, e_num, e_sum, o_num, o_sum;
	int n[4][3]={{2,3,5},{6,8,9},{2,7,3},{5,4,7}};
	
	e_num = e_sum = o_num = o_sum = 0;
	for(i=0; i<4; i++) {
		for(j=0; j<3; j++) {
			if(n[i][j] % 2 == 1) {
				o_num++;
				o_sum+=n[i][j];
			} else{
				e_num++;
				e_sum+=n[i][j];
			}
			printf("%d\t", n[i][j]);
		}
		printf("\n");
	}
	
	printf("Â¦¼ö°³¼ö=%d, Â¦¼öÇÕ=%d \nÈ¦¼ö°³¼ö=%d, È¦¼öÇÕ=%d\n", e_num, e_sum, o_num, o_sum); 
}
