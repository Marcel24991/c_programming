#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int first_month, first_day, first_year;
	int second_month, second_day, second_year;

	bool first_is_earlier = false;
	bool second_is_earlier = false;

	printf("Enter first date : (mm/dd/yy) : ");
	scanf("%d/%d/%d", &first_month, &first_day, &first_year);

	printf("Enter second date : (mm/dd/yy : ");
	scanf("%d/%d/%d", &second_month, &second_day, &second_year);

	if(first_year < second_year)
		first_is_earlier = true;

	if(second_year < first_year)
		second_is_earlier = true;

	if(!first_is_earlier && !second_is_earlier) // Jahre sind gleich
	{
		if(first_month < second_month)
			first_is_earlier = true;

		if(second_year < first_month)
			second_is_earlier = true;
	}

	if(!first_is_earlier && !second_is_earlier) // Monate sind gleich
	{	if(first_day < second_day)
			first_is_earlier = true;
		if(second_day < first_day)
			second_is_earlier = true;
	}

	if(first_is_earlier)
		printf("%d/%d/%d is earlier than %d/%d/%d \n",
		first_month, first_day, first_year, second_month, second_day, second_year);
	if(second_is_earlier)
		printf("%d/%d/%d is earlier than %d/%d/%d \n",
		second_month, second_day, second_year, first_month, first_day, first_year);



	return 0;
}
