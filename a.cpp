//monokai bright

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		char a[100001]={0};
		int sort[27]={0};
		
//		for(int i=0; i<27; i++)
//		{
//			cout<<sort[i];
//		}
		
		cin>>a;
		
//		cout<<a;
		
		int f,l;
		cin>>f>>l;
		
		
		for(int i=f; i<=l; i++)
		{
			sort[((int)a[i]-97)]++;
		}
		
		
		
		for(int i=0; i<f; i++)
		{
			printf("%c",a[i]);
		}
		
		
		
	//the error is here in while loop
		
		for(int i=27; i>=0; i--)
		{
			if(sort[i]!=0)
			{
	//			cout<<sort[i];
				while(sort[i]!=0)
				{
					cout<<(char)(i+97);
					sort[i]--;
				}
			}
		}
		
	//the error is here in while loop
		
		
		for(int i=l+1; i<strlen(a); i++)
		{
			cout<<a[i];
		}
		
		
		
		
		
		printf("\n");
	}
    return 0;
}
