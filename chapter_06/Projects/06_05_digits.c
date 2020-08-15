#include <stdio.h>

int main(void)
{
	int value, last_digit;
	printf("%d \n", 5001%10);
	printf("Enter a number : ");

	scanf("%d", &value);
	printf("Reverse : ");

	do
	{
		last_digit = value%10;
		value = value / 10;
		printf("%d", last_digit);
	}while(value!=0);

	printf("\n\n");

	return 0;
}
