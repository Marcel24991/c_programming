#include <stdio.h>

int main(void)
{
	float income;
	float tax;

	printf("Enter your income : ");
	scanf("%f", &income);

	if (income < 750)
		tax = 750 / 100;
	else if(income >= 750 && income < 2250)
		tax = income== 750 ? 7.50 : 7.50 + 0.02 * 750;
	else if(income >= 2250 && income < 3750)
		tax = income == 2250 ? 37.50 : 37.50 + 0.03 * 2250;
	else if(income >=3750 && income < 5250)
		tax = income == 3750 ? 82.50 : 82.50 + 0.04 * 3750;
	else if(income >= 5250 && income < 7000)
		tax = income == 5250 ? 142.50 : 142.50 + 0.05 * 5250;
	else if(income >= 7000)
		tax = income == 7000 ? 230 : 230 + 0.06 * 7000;

	printf("Tax : %.2f $\n", tax);

	return 0;
}
