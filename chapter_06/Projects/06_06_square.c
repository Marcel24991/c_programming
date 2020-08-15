#include <stdio.h>

int main(void)
{
	int n = 0, tmp = 0, c=2;

	printf("Enter a number : ");
	scanf("%d", &n);

	for(int i=2; i<=n/10; i++)
	{
		if(i%2==0)
		{
			tmp = i*i;
			printf("Tmp: %d\n", tmp);
		}
	}
	return 0; 
}
