#include<stdio.h>

int main(void)
{
	int mm, dd, yyyy, item;
	float price;

	printf("Enter item number : ");
	scanf("%d", &item);

	printf("Enter unit price : ");
	scanf("%f", &price);

	printf("Enter purchase date (mm/dd/yyyy) : ");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);

	printf("Item\t\t Unit\t\t Purchase\n");
	printf("\t\t Price\t\t Date\n");
	printf("%d\t\t $ %.2f\t %.2d/%d/%d\n", item, price, mm, dd, yyyy);
	return 0;
}
