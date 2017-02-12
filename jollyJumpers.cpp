#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[3001][2] = {0};
	int n, flag = 0;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>a[i][0];
		if(i>1)
		{
			a[abs(a[i][0]-a[i-1][0])][1] = -1;
		}
	}
	for(int i=1; i<n; i++)
	{
		if(a[i][1] == 0){
			flag=1;
			break;
		}
	}
	if(flag == 0)
		cout<<"Jolly\n";
	else
		cout<<"Not jolly\n";
	return 0;
}