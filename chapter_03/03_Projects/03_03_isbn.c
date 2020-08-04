#include<stdio.h>

int main(void)
{
	int gs_1, group_identifier, publisher_code;
	int check_digit, item_number;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs_1, &group_identifier, &publisher_code, &item_number, &check_digit); 

	printf("GS1 prefix : %d\n", gs_1);
	printf("Group identifier: %d\n", group_identifier);
	printf("Publisher code: %d\n", publisher_code);
	printf("Item number: %d\n", item_number);
	printf("Check digit : %d\n", check_digit);

	return 0;
}
