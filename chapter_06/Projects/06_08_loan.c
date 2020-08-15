#include<stdio.h>

int main(void)
{
	float loan, interest_rate, monthly_payment;
	float first_payment, second_payment, third_payment;
	float x_payment;
	float interest_rate_monthly;
	int payments_remain;

	printf("Enter amount of loan : ");
	scanf("%f", &loan);

	printf("Enter interest rate : ");
	scanf("%f", &interest_rate);

	printf("Enter monthly payment : ");
	scanf("%f", &monthly_payment);

	printf("Enter the number of payments : ");
	scanf("%d", &payments_remain);

	interest_rate_monthly = loan * (interest_rate / 100) / 12;
	first_payment = loan - monthly_payment + interest_rate_monthly; 
	second_payment = first_payment - monthly_payment + interest_rate_monthly;
	third_payment = second_payment - monthly_payment + interest_rate_monthly;

	printf("Balance remainng after first payment : $ %.2f\n", first_payment );
	printf("Balance remaining after second payment : $ %.2f\n", second_payment);
	printf("Balance remaining after third payment :  $ %.2f\n", third_payment);

	x_payment = third_payment;

	for(int i=3; i<payments_remain; i++)
		x_payment = x_payment - monthly_payment + interest_rate_monthly;

	printf("Balance remaining after %d : $ %.2f \n", payments_remain, x_payment);

	return 0;
}
