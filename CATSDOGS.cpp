#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int c,d l;
        cin>>c>>d>>l;
        if(l>((c*4)+(d*4)))
            cout<<"no\n";
        else if(l<4 || (l%4)!=0)
            cout<<"no\n";
        else
            cout<<"yes\n";
    }
    return 0;
}