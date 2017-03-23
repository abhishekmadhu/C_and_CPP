//Wrong Algo, you dumbhead........

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
        long int min = 1000000001, max=0;
        cin>>n;
        
        for(i=0; i<100004; i++)
            a[i]=0;
        
        for(i=1; i<=n; i++)
        {
            cin>>k;
            a[k]++;         //this will give SIGSEV error as 1<k<10pow9 which is not available
            
            if(k>max)
                max = k;
            if(k<min)
                min = k;
            
        }
        
        for(i = min; i<=max; i++)
        {
            if(a[i]>1 || (a[i-1]==0 && a[i] == 1 && a[i+1] == 0)) 
            {
                cout<<i<<endl;
                break;
            }    
        }

    }
  
    return 0;
    
}