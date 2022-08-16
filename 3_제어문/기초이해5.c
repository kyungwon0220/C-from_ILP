#include <stdio.h>

main() {
	int n;
	
	printf("다음중하나를선택하세요.\n");
	printf("1.apple\n"); 
	printf("2.orange\n"); 
	printf("3.banana\n"); 
	printf("4.peach\n"); 
	printf(" 선택한번호를입력하세요:");
	scanf("%d", &n);
	printf("--------------\n");
	switch(n) {
		case 1:
			printf("당신은\"apple\"를선택하였습니다.\n");
			break;
		case 2:
			printf("당신은\"orange\"를선택하였습니다.\n");
			break;
		case 3:
			printf("당신은\"banana\"를선택하였습니다.\n");
			break;
		case 4:
			printf("당신은\"peach\"를선택하였습니다.\n");
			break;
		}			
}
