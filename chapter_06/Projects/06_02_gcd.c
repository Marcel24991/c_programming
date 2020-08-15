#include <stdio.h>

int main(void)
{
	int m, n, gcd;
	printf("Enter two integers : ");
	scanf("%d %d", &m, &n);

	while(1)
	{
		int remain = 0;
		if(n == 0){
			gcd=m;
			break;
		}
		else{
			remain = m%n;
			m=n;
			n=remain;
		}
	}

	printf("Greatest common divisor : %d \n", gcd);

	return 0;
}
