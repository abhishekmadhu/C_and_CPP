/*
Question: https://www.codechef.com/NOV16/problems/ALEXTASK
Status: Wrong Answer
*/


#include <bits/stdc++.h>
#define lli long long int
#define li long int

using namespace std;

lli gcd(lli a, lli b)
{
    lli min=(a>b)?b:a;
    for(int i=min; i>=2; i--)
    {
        if(a%i==0 && b%i==0)
        {   
            return i;
            break;
        } 
    }
}

lli lcm(lli a, lli b)
{
    lli leastcm;
    leastcm=(a*b)/gcd(a,b);
    return leastcm;
}
 
int main()
{
    li t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        lli a[510]={0},min=500;
        for(int i=1; i<=n; i++)
            cin>>a[i];
        for(int i=1; i<=n-1; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                if(min>lcm(a[i],a[j]))
                {
                    
                    min=lcm(a[i],a[j]);
                }
            }
        }
        cout<<min<<endl;
    }
    return 0;
}