#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int num1,num2;
	double div;
	
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d",&num1);
	
	printf("�и� �Է��ϼ��� : ");
	scanf("%d",&num2);
	
	div = (float)num1/num2;
	printf("�������� ����� %f\n",div);
	
	return 0;
}
