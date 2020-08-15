#include <stdio.h>

int main(void)
{
	int i = 10;
	int counter = 0;

	while(i>=1){
		printf("%d ", i++);
		i/=2;
		counter ++;

		if(counter > 10)
			break;
	}

	return 0;
}
