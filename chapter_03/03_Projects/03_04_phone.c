#include<stdio.h>

int main(void)
{
	int prefix, middle, last;

	printf("Enter phone number [(xxx) xxx-xxxx] :");
	scanf("(%d) %d-%d", &prefix, &middle, &last);
	printf("You entered %d.%d.%d\n", prefix, middle, last);
	return 0;
}
