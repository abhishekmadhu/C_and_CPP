#include <bits/stdc++.h>
#define size 1000001
#define lli long long int

using namespace std;

void print(lli array[], int t)
{
//	cout<<"bhindi\n";
	for (int i = 0; i <= t; i++)
	{
//		cout<<"kumro\n";
		if(array[i]!=0)
		{
//			cout<<"gazar\n";
			for(int p=1; p<=array[i]; p++)
			{
				cout<<i<<"\n";
			}
		}
	}
}


int main()
{
	lli array[size];
	for(int i=0; i<=size-1; i++)
		array[i]=0;
	int t,u;
	cin>>t;
	u=t;
	while(t--)
	{
		int num;
		cin>>num;
		array[num]++;
//		cout<<"aloo\n";
	}
	print(array,u);

	return 0;
}