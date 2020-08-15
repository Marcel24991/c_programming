#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int number = 10;
	bool is_prime = false;

	printf("Enter a number between 0 and 99 : ");
	scanf("%d", &number);

	for(int i=2; i<number; i++)
	{
		int result = 0;
		result = number % i;
		if(result){
			is_prime=true;
		//	printf("%d: \n" ,i);
		}
		else{
			is_prime=false;
			break;
		}

	}

	if(is_prime){
		printf("%d is a prime number \n", number);
	}else{
		printf("%d is NOT a prime number\n", number);
	}

	return 0;
}
