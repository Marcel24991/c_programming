#include<stdio.h>

int main(void)
{
	int i,j;

	i = 10;
	j = 30;

	printf("%d \n", i < j? -1 : i==j? 0 : 1); 
	return 0;
}
