#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char alp;
	int alpn;
	printf("enter a character : ");
	scanf("%c", &alp);
	
	alpn = alp;
	
	printf("the next charater of %c (%i) is %c (%i)\n", alp, alpn, alp+1, alpn+1);
	
	return 0;
}
