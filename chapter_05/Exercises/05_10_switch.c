#include <stdio.h>

int main(void)
{
	int i = 1;
	printf("%d\n ", 1%3);
	switch (1 % 3)
	{
		case 0: printf("zero");
		case 1: printf("one");
		case 2: printf("two");
	}

	// output -> onetwo
	return 0;
}
