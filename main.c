#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
    float c;
     
    printf("분자를 입력하세용 : ");
    scanf("%d", &a);
    printf("분모를 입력하세용 : ");
    scanf("%d", &b);
    c = (float)a/(float)b;
    printf("나누기의 결과는 %.6lf 입니다.", c);
    
	return 0;
}
