#include<stdio.h>

int main(void)
{
	int x,y,z;

	printf("Enter a three digit number: ");
	scanf("%1d%1d%1d", &x, &y, &z);

	printf("The reversal is: %d\n", (z*100) + (y*10) + x);
	return 0;
}
