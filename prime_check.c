//Checking prime or not using recursion

#include <stdio.h>
int chk_prime(int a, int b)
{
	int flag;
	if(b!=1)
	{
		flag=0;
		if(a%b==0)
		{
			//return flag;
			return 1;
		}
		else
		{
			chk_prime(a,b-1);
		}
	}
	//printf("%d",flag);
	return flag;
}
int main()
{
	int a,b;
	scanf("%d",&a);
	b=chk_prime(a,a-1);
	if(b==0)
		printf("PRIME\n");
	else
		printf("NOT PRIME\n");
	return 0;
}