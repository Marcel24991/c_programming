#include <stdio.h>

int main(void)
{
	float input, biggest;

	do{
		printf("Enter a number : ");
		scanf("%f", &input);
		biggest = input > biggest? input : biggest;
	}while(input > 0);

	printf("The largest number entered was : %.2f\n", biggest);
}
