#include<stdio.h>

int main(void)
{
	int value;
	/*
	// 1. solution
	printf("Enter a number between 0 and 32767 :");
	scanf("%d", &value);

	printf("In octal, your number is :0%o\n", value);
*/
	// 2. solution
	printf("Enter a number between 0 and 32767 : ");
	scanf("%d", &value);

	int octal_1, octal_2, octal_3, octal_4, octal_5;

	int remain = 0;

	octal_1 = value % 8;
	remain = value / 8;

	octal_2 = remain % 8;
	remain = remain / 8;

	octal_3 = remain % 8;
	remain = remain / 8;

	octal_4 = remain % 8;
	remain = remain / 8;

	octal_5 = remain % 8;
	remain = remain / 8;

	printf("%d%d%d%d%d\n", octal_5, octal_4, octal_3, octal_2, octal_1);

	//printf("In octal, your number is %d\n", octal);

	return 0;

}
