#include <stdio.h>

main() {
	char c;
	int ndigit, nalphabet, nwhite, nother;
	
	ndigit = nalphabet = nwhite = nother = 0;
	while( (c=getchar() ) != EOF ) {
		if(c>= '0' && c<= '9')
			ndigit++;
		else if((c>=65 && c<=90) || (c>=97 && c<=122))
			nalphabet++;
		else if((c == ' ') || (c == ',') || (c == '\t'))
			nwhite++;
		else
			nother++;
	}
	printf("����:%d��\n������:%d��\n���鹮��:%d��\n�׿ܹ���:%d��\n", ndigit, nalphabet, nwhite, nother);
}
