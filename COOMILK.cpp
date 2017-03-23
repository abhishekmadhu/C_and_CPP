//https://www.codechef.com/LTIME45/problems/COOMILK


#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, flag=0;
        char a[10];
        char b[10];
        a[0] = 'm';
        cin>>n;
        while(n--)
        {
            cin>>b;
            if(a[0]=='c' && b[0]!='m')
            {
                flag = -1;
                break;
            }
            a[0]=b[0];
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
