#include<stdio.h>

int main(void)
{
	int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12;
	int sum_1, sum_2, total, checksum;

	printf("Enter EAN code : ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
	&i1, &i2, &i3, &i4, &i5, 
	&i6, &i7, &i8, &i9, &i10, &i11, &i12);

	sum_1 = i2 + i4 + i6 + i8 + i10 + i12;
	sum_2 = i1 + i3 + i5 + i7 + i9 + i11;

	total = (sum_1 * 3) + sum_2;
	total -= 1;
	printf("%d\n", total);
	checksum = 9 - (total % 10);
	printf("Checksum : %d \n", checksum);



	return 0;
}
