#include <stdio.h>

int main(void)
{
	// 1. Solution:
	int x=0, y=0;
	printf("Enter a two-digit number: ");
	scanf("%1d%1d", &x, &y);

	printf("The reversal is: %d%d\n", y, x);

	// 2. Solution
	printf("Enter a two-digit number: ");
	scanf("%d", &x);
	printf("The reversal is: %d%d\n", x % 10, x / 10);
	return 0;
}
