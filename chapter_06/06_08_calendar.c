#include <stdio.h>

int main(void)
{
	int days, indent;
	int digits = 0;

	printf("Enter number of days in month: ");
	scanf("%d", &days);

	printf("Enter starting day of the week (1=Sun, 7=Sat) : ");
	scanf("%d", &indent);

	indent--;

	for(int i=0; i<indent; i++){
		printf("   ");
	}

	for(int i=1; i<=days; i++)
	{
		if(i>9)
			printf("%d ", i);
		else
			printf(" %d ", i);
		indent ++;
		if(indent%7==0){
			printf("\n");
			indent = 0;
		}

	}

	printf("\n");

	return 0;
}
