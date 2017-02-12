/*
Question: https://www.codechef.com/IEMCO16/problems/TE3N
Status: WA
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	long int flag=-1;
	cin>>t;

	while(t--)
	{
		char a[100050];
		cin>>a;
		long int l=strlen(a);
		
		for(int i=0; i<l; i++)
		{
			flag++;
			if(a[i]=='M')
			{
				if(a[flag-1]=='E' && a[flag-2]=='I')
				{
					flag-=3;
				}
			}
		}
		
//	    cout<<"f="<<flag<<endl;
		if(flag==-1)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}