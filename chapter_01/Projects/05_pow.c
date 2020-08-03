#include <stdio.h>

int main(void)
{
	int x = 0, x_pow5 = 0, x_pow4 = 0, x_pow3 = 0, x_pow2 = 0, output = 0;
	printf("Enter a value of x : ");
	scanf("%d", &x);

	x_pow5 = x*x*x*x*x;
	x_pow4 = x*x*x*x;
	x_pow3 = x*x*x;
	x_pow2 = x*x;

	output = 3*x_pow5 + 2*x_pow4 - 5*x_pow3 - x_pow2 + 7*x - 6;
	printf("%d\n", output);

	return 0;
}
