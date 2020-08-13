#include <stdio.h>
#include <stdbool.h>



int main(void)
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5;
	int first_sum, second_sum, total;
	bool is_valid = false;

	printf("Enter the first (single digit : ");
	scanf("%1d", &d);

	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);


	printf("Enter second group of five digits : ");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

	is_valid = i1 && i2 && i3 && i4 &&i5 && j1 && j2 &&j3 && j4 && j5 && d;

	if(is_valid)
		printf("VALID\n");
	else
		printf("NOT VALID\n");


	return 0; 
}

