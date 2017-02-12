#include <bits/stdc++.h>
using namespace std;
int prime(int a)
{
	int k=0;
	for(int i=2; i<=a/2; i++)
	{
		
		if(a%i==0)
		{
			k++;
			break;
		}
	}
	return k;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		while(m!=n)
		{
			if(prime(m)==0)
			{
				m++;
				if(m!=n)
				{
					n--;
				}
			}
			else if(prime(m)==1)
			{
				m++;
				n++;
			}
		}
		cout<<n<<endl;
	}
}