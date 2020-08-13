#include <stdio.h>

int main(void)
{
	int score;
	char grade = ' ';
	int prefix;

	printf("Enter numerical grade : ");
	scanf("%d", &score);

	prefix = score / 10; // To get the fist digit

	switch(prefix)
	{
		case 10: case 9: grade = 'A'; break;
		case 8 : grade = 'B'; break;
		case 7 : grade = 'C'; break;
		case 6 : grade = 'D'; break;
		case 5 : case 4: case 3: case 2:
		case 1: case 0:  grade = 'F'; break;
	}

	if(grade == ' ' || score > 100)
		printf("An error occured \n");
	else
		printf("Your grade is : %c \n", grade);

	return 0;
}
