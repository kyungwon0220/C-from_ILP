#include <stdio.h>

main() {
	int i, j, max, row, col;
	int n[3][3];
	
	// 9�� ������ �Է�
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++)
			scanf("%d", &n[i][j]);
	}
	
	// �ִ밪 ã��
	max = n[0][0];
	row = col = 0;
	
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			if(max < n[i][j]) {
				max = n[i][j];
				row = i;
				col = j;
			}
		}
	}
	
	printf("�ִ밪 : n[%d][%d] = %d", row, col, max); 
}
