#include<stdio.h>

int main(void)
{
	int i, j, k;
	// a
	i = 2;
	j = 3;
	k = i*j == 6;
	printf("%d\n", k); // 1

	// b
	i = 5;
	j = 10;
	k = 1;
	printf("%d\n", k > i < j); // 1

	// c
	i = 3;
	j = 2;
	k = 1;
	printf("%d\n", i < j == j < k); // 1

	// d
	i = 3;
	j = 4;
	k = 5;
	printf("%d\n", i % j + j < k); // 0


	return 0;
}
