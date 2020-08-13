#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int hours, minutes;
	bool isCorrect = false;
	char flag = 'A';

	printf("Enter a 24-hour time : " );
	scanf("%d:%d", &hours, &minutes);

	isCorrect = (hours >= 0 && hours <= 23) &&
		    (minutes >=0 && minutes <= 60);

	if(isCorrect)
	{
		switch(hours)
		{
			case 12:
				flag = 'P';
				break;
			case 13:
				flag = 'P';
				hours = 1;
				break;
			case 14:
				flag = 'P';
				hours = 2;
				break;
			case 15:
				flag = 'P';
				hours = 3;
				break;
			case 16:
				flag = 'P';
				hours = 4;
				break;
			case 17:
				flag = 'P';
				hours = 5;
				break;
			case 18:
				flag = 'P';
				hours = 6;
				break;
			case 19:
				flag = 'P';
				hours = 7;
				break;
			case 20:
				flag = 'P';
				hours = 8;
				break;
			case 21:
				flag = 'P';
				hours = 9;
				break;
			case 22:
				flag = 'P';
				hours = 10;
				break;
			case 23:
				flag = 'P';
				hours = 11;
				break;
			case 0:
				hours = 12;
				break;
		}
	}

	printf("Equivalent 12-hour time: %d:%d %cM\n", hours, minutes, flag); 
	return 0;
}
