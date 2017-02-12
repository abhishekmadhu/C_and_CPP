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
	float ans, b, i,n;
	int terms;
	scanf("%d" , &terms);
	n = (float)terms;
	ans=0;
	for (i=1; i<=n; i++)
	{
		ans+=(1/power(i,i));
	}
	printf("%.6f\n", ans);
	//printf("2 cube is %f\n", power(2,3));
	return 0;
}