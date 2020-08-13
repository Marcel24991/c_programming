#include <stdio.h>

int main(void)
{
	int value;
	int first_digit;
	int second_digit;

	printf("Enter a two-digit number : ");
	scanf("%d", &value);

	first_digit = value / 10;
	second_digit = value % 10;

	printf("First digit : %d \n", first_digit);
	printf("Second digit : %d \n" , second_digit);

	printf("You entered the number : ");

	if(value == 10)
		printf("ten");
	else if(value == 11)
		printf("eleven");
	else if(value == 12)
		printf("twelve");
	else if(value == 13)
		printf("thirteen");
	else if(value == 14)
		printf("fourteen");
	else if(value == 15)
		printf("fifteen");
	else if(value == 16)
		printf("sixteen");
	else if(value == 17)
		printf("seventeen");
	else if (value == 18)
		printf("eigteen");
	else if (value == 19)
		printf("nineteen");

	if(first_digit == 2)
		printf("twenty");
	else if(first_digit == 3)
		printf("thirty");
	else if(first_digit == 4)
		printf("fourty");
	else if(first_digit == 5)
		printf("fifty");
	else if(first_digit == 6)
		printf("sixty");
	else if(first_digit == 7)
		printf("seventy");
	else if(first_digit == 8)
		printf("eighty");
	else if(first_digit == 9)
		printf("ninety");

	if(second_digit == 1)
			printf("-one");
		else if(second_digit == 2)
			printf("-two");
		else if(second_digit == 3)
			printf("-three");
		else if(second_digit == 4)
			printf("-four");
		else if(second_digit == 5)
			printf("-five");
		else if(second_digit == 6)
			printf("-six");
		else if(second_digit == 7)
			printf("-seven");
		else if(second_digit == 8)
			printf("-eight");
		else if(second_digit == 9)
			printf("-nine");


	printf("\n");
	return 0;
}
