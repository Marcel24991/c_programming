#include <stdio.h>

int main(void)
{
	int n = 0, i=0;
	int sum = 0;

	while(n < 10){
		scanf("%d", &i);
		if(i==0)
			continue;
		sum+=i;
		n++;
		printf("Bei 0 werde ich nicht ausgegeben \n");
	}

	return 0;
}
