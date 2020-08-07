#include<stdio.h>

int main(void)
{
	int i = 2, j= 4;

	printf("%d\n", (-i) / j);
	printf("%d\n", -(i/j));

	i=5; j=7;
	printf("%d\n", (-i) / j);
        printf("%d\n", -(i/j));

	i=8; j=10;
	printf("%d\n", (-i) / j);
        printf("%d\n", -(i/j));

	i=10; j=2;
	printf("%d\n", (-i) / j);
        printf("%d\n", -(i/j));


	return 0;
}
