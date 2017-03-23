#include<stdio.h>
using namespace std;

int main()
{
	int t,n;
	int a[300],b[300];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
		cin>>a[i];
		}

		b[0]=0;
		for(int i=1;i<=n;i++)
		b[i]=n;

		for(int i=1;i<=10;i++)
		{
		for(int j=0;j<n;j++)
		if(i>a[j]);
		b[i]=min(b[i],1+b[i-a[j]]);
		}
	}
}