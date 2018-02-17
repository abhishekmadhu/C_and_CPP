/*
@uthor: abhishekMadhu
handle: coder_nigga
UEM,KOLKATA
*/

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

long long int noOfSq(lli n){
	return (n*(n+1)*((2*n)+1))/6;
}

long double term(lli i, long double a, lli sq){
	return i*(a/sq);
}


int main(){
	long int t;
	cin>>t;
	while(t--){
		lli n,a;
		cin>>n;
		
		lli sq=noOfSq(n);
		long double ans = 0;
		
		for(lli i=1; 1<=n; i++){
			a=(n-i+1)*(n-i+1);
			ans+=term(i,a,sq);
		}
		cout<<floor(ans)<<endl;
	}
	return 0;
}