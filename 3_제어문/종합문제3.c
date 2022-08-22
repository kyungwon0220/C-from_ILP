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
	printf("숫자:%d개\n영문자:%d개\n공백문자:%d개\n그외문자:%d개\n", ndigit, nalphabet, nwhite, nother);
}
