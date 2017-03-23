#include <bits/stdc++.h>
using namespace std;

long int a[100005];

int main()
{
    int t;
    long int i,n,k;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>k;
            a[k]++;
            if(k>max)
                max = k;
            if(k<min)
                min = k;
        }
        for(i=min; i<=max; i++)
        {
            while(a[i]--)
                cout<<i;
        }
    }
  
    return 0;
    
}