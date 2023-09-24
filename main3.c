#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int num1,num2;
	double div;
	
	printf("분자를 입력하세요 : ");
	scanf("%d",&num1);
	
	printf("분모를 입력하세요 : ");
	scanf("%d",&num2);
	
	div = (float)num1/num2;
	printf("나누기의 결과는 %f\n",div);
	
	return 0;
}
