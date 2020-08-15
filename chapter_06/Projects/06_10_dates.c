#include <stdio.h>
#include <stdbool.h>

int main(void)
{

	int user_input_month, user_input_day, user_input_year;
	int month, day, year;
	int tmp_month, tmp_day, tmp_year;
	int earliest_month, earliest_day, earliest_year;
	bool first_is_earlier, second_is_earlier;

	for(int i=0;;i++) // Goes forever until all inputs are set to zero.
	{
		printf("Enter a date : (mm/dd/yy : ");
		scanf("%d/%d/%d", &user_input_month, &user_input_day, &user_input_year);

		if(user_input_month != 0 && user_input_day != 0 && user_input_year != 0)
		{
			if(i != 0)
			{
				month = user_input_month;
				day = user_input_day;
				year = user_input_year;
			}
			else
			{
				tmp_month = user_input_month;
				tmp_day = user_input_day;
				tmp_year = user_input_year;
				continue; // Only one date is available so continue to get the next one
			}


			if(year < tmp_year)
                		first_is_earlier = true;

        		if(tmp_year < year)
                		second_is_earlier = true;

        		if(!first_is_earlier && !second_is_earlier) // Jahre sind gleich
        		{
                		if(month < tmp_month)
                        		first_is_earlier = true;

                	if(tmp_year < month)
                        	second_is_earlier = true;
        		}

        		if(!first_is_earlier && !second_is_earlier) // Monate sind gleich
        		{
				if(day < tmp_day)
                        		first_is_earlier = true;
                		if(tmp_day < day)
                        		second_is_earlier = true;
        		}


			if(first_is_earlier)
			{

				 earliest_day = day;
				earliest_month = month;
				earliest_year = year;
			}else
			{
				earliest_day = tmp_day;
				earliest_month = tmp_month;
				earliest_year = tmp_year;
			}
		}
		else
		{
			break;
		}
	}

                printf("%d/%d/%d is the earliest date \n",
                earliest_month, earliest_day, earliest_year);


	return 0;
}
