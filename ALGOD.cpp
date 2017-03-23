//algod

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n, count=0;
        cin>>n;
        int a[1000001];
        for(int i=0; i<n ; i++)
            cin>>a[i];
            
            
        for(int i=0; i<n-1 ; i++)
        {
            for(int j = i+1; j<n; j++)
            {
                if ((a[i] ^ a[j]) == 0)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }



	return 0;
}
