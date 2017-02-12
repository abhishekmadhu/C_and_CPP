#include <bits/stdc++.h>
using namespace std;

void sort(int a[], int n)
{
	int temp;
	for(int i=1; i<=n; i++)
		{
			for(int j=i+1; j<=n; j++)
			{
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
//	return a[];
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[100],b[100],n;
		cin>>n;
		for(int i=1; i<=n; i++)
		{
			scanf("%d", &a[i]);
		}
		sort(a,n);
//		cout<<a[1]<<" "<<a[2]<<endl;
		for(int i=1; i<=n; i++)
		{

		}
	}
	return 0;
}