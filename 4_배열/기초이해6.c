#include <stdio.h>

main() {
	
	//e_num : 礎熱 偃熱 e_sum : 礎熱 м  o_num : ?汝? 偃熱 o_sum : ?汝? м
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
	
	printf("礎熱偃熱=%d, 礎熱м=%d \n?汝鰤頃?=%d, ?汝鷍?=%d\n", e_num, e_sum, o_num, o_sum); 
}
