#include <stdio.h>

#define PI 3.1415926535898

int main(void)
{
	int r = 0;
	float v = 0.0f;

	printf("Enter the radius : "); 
	scanf("%d", &r);

	v = (4.0f / 3.0f) * PI * (r*r*r);
	printf("Volume: %.2f\n", v);

	return 0;
}
