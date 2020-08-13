#include <stdio.h>

int main(void)
{
	int value0;
	int value1;
	int value2;
	int value3;

	int largest;
	int smallest;
	int tmp0_smallest = 0, tmp1_smallest = 0;
	int tmp0_largest = 0, tmp1_largest = 0;

	printf("Enter four integers : ");
	scanf("%d %d %d %d", &value0, &value1, &value2, &value3);

	if(value0 > value1)
	{
		tmp0_largest = value0;
		tmp0_smallest = value1;
	}
	else
	{
		tmp0_largest = value1;
		tmp0_smallest = value0;
	}
	if(value2 > value3)
	{
		tmp1_largest = value2;
		tmp1_smallest = value3;
	}
	else
	{
		tmp1_largest = value3;
		tmp1_smallest = value2;
	}

	largest = tmp0_largest > tmp1_largest ? tmp0_largest : tmp1_largest;
	smallest = tmp0_smallest < tmp1_smallest? tmp0_smallest : tmp1_smallest;

	printf("Largest : %d \n", largest);
	printf("Smallest : %d \n", smallest);

	return 0;
}
