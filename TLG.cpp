/*
Question: https://www.codechef.com/problems/TLG
Status: WA
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long int n;
	int a[5][10050]={0},max=0,flag=0;
	cin>>n;
	for(long int j=1; j<=n; j++)
	{
		cin>>a[1][j]>>a[2][j];
		if(a[1][j]>a[2][j])
		{
			a[3][j]=a[1][j]-a[2][j];
			a[4][j]=1;
		}
		else if(a[1][j]<a[2][j])
		{
			a[3][j]=a[2][j]-a[1][j];
			a[4][j]=2;
		}
		if(a[3][j]>max)
		{
			max=a[3][j];
			flag=j;
		}
	}
	cout<<a[4][flag]<<" "<<max;
	return 0;
}