#include <stdio.h>

int main(void)
{
	int v0,v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,v11,v12,v13,v14,v15;
	int row_sum0, row_sum1, row_sum2, row_sum3;
	int col_sum0, col_sum1, col_sum2, col_sum3;
	int dia_sum0, dia_sum1;

	printf("Enter the numbers from 1 to 16 in any order: ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &v0, &v1, &v2, &v3, &v4, &v5, &v6, &v7, &v8, &v9, &v10, &v11, &v12, &v13, &v14, &v15);

	printf("\n\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n", v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15);

	row_sum0 = v0 + v1 + v2 + v3;
	row_sum1 = v4 + v5 + v6 + v7;
	row_sum2 = v8 + v9 + v10 + v11;
	row_sum3 = v12 + v13 + v14 + v15;

	col_sum0 = v0 + v4 + v8 + v12;
	col_sum1 = v1 + v5 + v9 + v13;
	col_sum2 = v2 + v6 + v10 + v14;
	col_sum3 = v3 + v7 + v11 + v15;

	dia_sum0 = v12 + v9 + v6 + v3;
	dia_sum1 = v0 + v5 + v10 + v15;

	printf("Row sums: %d %d %d %d\n", row_sum0, row_sum1, row_sum2, row_sum3);
	printf("Column sums: %d %d %d %d\n", col_sum0, col_sum1, col_sum2, col_sum3);
	printf("Diagonal sums : %d %d\n", dia_sum0, dia_sum1);

	return 0; 
}
