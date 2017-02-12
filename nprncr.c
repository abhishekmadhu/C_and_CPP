#include <stdio.h>

int fact(int a)
{
	int ans=1,i;
	for(i=1; i<=a; i++)
	{
		ans*=i;
	}
	return ans;
}
int npr(int n, int r)
{
	int ans;
	ans=fact(n)/fact(n-r);
	return ans;
}

int ncr(int n, int r)
{
	int ans;
	ans=fact(n)/(fact(r)*fact(n-r));
	return ans;
}

int main()
{
	int n,r,C,P;
	scanf("%d%d",&n,&r);
	C=ncr(n,r);
	P=npr(n,r);
	printf("ncr=%d\n", C);
	printf("npr=%d\n", P);
	return 0;
}