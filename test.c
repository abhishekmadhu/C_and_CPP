#include <stdio.h>
#include <math.h>
float power (float a, float b)
{
	float num=1,i;
	for (i=1; i<=b; i++)
	{
		num*=a;
	}
	return num;
}
int main()
{
	float a,n;
	scanf("%f%f", &a,&n);
	printf("The %fth power of %f is %f\n", n, a, power(a,n));
	return 0;
}
