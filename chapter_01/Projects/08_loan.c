#include<stdio.h>

int main(void)
{
	float loan, interest_rate, monthly_payment;
	float first_payment, second_payment, third_payment;
	float interest_rate_monthly;

	printf("Enter amount of loan : ");
	scanf("%f", &loan);

	printf("Enter interest rate : ");
	scanf("%f", &interest_rate);

	printf("Enter monthly payment : ");
	scanf("%f", &monthly_payment);

	interest_rate_monthly = loan * (interest_rate / 100) / 12;
	first_payment = loan - monthly_payment + interest_rate_monthly;
	second_payment = first_payment - monthly_payment + interest_rate_monthly;
	third_payment = second_payment - monthly_payment + interest_rate_monthly;

	printf("Balance remainng after first payment : $ %.2f\n", first_payment );
	printf("Balance remaining after second payment : $%.2f\n", second_payment);
	printf("Balance remaining after third payment  $%.2f\n", third_payment);

	return 0;
}
