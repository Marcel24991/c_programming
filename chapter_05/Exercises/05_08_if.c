#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool teenager = false;
	int age = 13;

	teenager = (age >= 13 && age <= 19);

	if(teenager)
		printf("You are a teenager: %d \n", teenager);
	else
		printf("Your best days are past or about to come \n"); 
	return 0;
}
