#include <stdio.h>

int get_gcd(int m, int n);

int main(void)
{
	int m, n, gcd;
	printf("Enter a fraction : ");
	scanf("%d/%d", &m, &n);

	gcd = get_gcd(m, n);

	printf("In lowest terms : %d/%d \n", m/gcd, n/gcd);

	return 0;
}

int get_gcd(int m, int n)
{
	int gcd = 0;
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

	return gcd;
}
