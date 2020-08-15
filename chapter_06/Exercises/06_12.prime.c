#include <stdio.h>

int main(void)
{
	int n = 7;

	for(int d=2; d<n; d*d){
		if(n % d == 0){
			printf("%d is prime \n", n);
			break;
		}
	}
}
