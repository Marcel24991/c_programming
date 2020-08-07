#include<stdio.h>

int main(void)
{
	int v1, v3, v5, v7, v9, v11;
	int v2, v4, v6, v8, v10;

	int sum_0, sum_1, checksum;

	printf("Enter product code:  ");
	scanf("%1d %1d%1d%1d%1d%1d %1d%1d%1d%1d%1d", &v1, &v2, &v3, &v4, &v5, &v6, &v7, &v8, &v9, &v10, &v11);

	sum_0 = v1 + v3 + v5 + v7 + v9 + v11;
	sum_1 = v2 + v4 + v6 + v8 + v10;

	checksum = 10-(((sum_0 * 3) + sum_1) % 10);
	printf("checksum: %d\n", checksum);

	return 0;

}
