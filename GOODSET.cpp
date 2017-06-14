#include <bits/stdc++.h>
using namespace std;


/*	FOR Subtask #1		[Solved]
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int k=0;
		int l=0;
		for(int i=1; i<=n; i++){
			cout<<k+l+1<<" ";
			int temp = l;
			l=k;
			k=temp+k+1;
		}
		cout<<endl;

	}
	return 0;
}
*/

/*		FOR Subtask #2		*/

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int p=251;
		for(int i=1; i<=n; i++){
			cout<<p++<<" ";
		}

		cout<<endl;
	}
	return 0;
}

















