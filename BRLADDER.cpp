/*
@uthor: abhishekMadhu
handle: coder_nigga
UEM,KOLKATA
https://www.codechef.com/LTIME46/problems/BRLADDER
*/
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t,a,b,flag;
    cin>>t;
//    cout<<t;
    while(t--)
    {
//        cout<<t;
        flag=0;
        cin>>a>>b;
        if(a%2==0 && b%2==0)
        {
            if(abs(a-b)==2)
            {
                cout<<"YES\n";
                flag=-1;

            }
        }
        else if(a%2==1 && b%2==1)
        {
            if(abs(a-b)==2)
            {
                cout<<"YES\n";
                flag=-1;

            }
        }
        if((((a-1)/2)==((b-1)/2))||(((a-1)/2)==((b-1)/2)))
        {
            if(abs((a/2)-(b/2))==1)
            {
                cout<<"YES\n";
                flag=-1;

            }
        }
        if(flag==0)
            cout<<"NO\n";
    }
    return 0;
}
