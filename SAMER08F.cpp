//http://www.spoj.com/problems/SAMER08F/

#include <bits/stdc++.h>
using namespace std;

int main()
{

	// your code here
	int n;
	cin>>n;
	if(n!=0){
	long long int ans=(n*(n+1)*((2*n)+1)/6);
	cout<<ans<<"\n";
	}
	return 0;
}
