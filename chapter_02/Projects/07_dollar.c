#include <stdio.h>

int main(void)
{
	int dollar, bills, left;
	printf("Enter a dollar amount: ");
	scanf("%d", &dollar);

	bills=dollar/20;
	left = dollar - 20 * bills;
	printf("$20 bills: %d\n", bills);

	bills = left/10;
	left =  left - 10*bills;
	printf("$10 bills: %d\n", bills);

	bills = left/5;
	left = left - 5*bills; 
	printf("$5  bills: %d\n", bills);

	bills = left/1;
	left = left - 1*bills;
	printf("$1  bills: %d\n", bills); 
	return 0;
}
