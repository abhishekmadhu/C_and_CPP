/*
Question: https://www.codechef.com/problems/PRB01
*/

#include<bits/stdc++.h>
using namespace std;

long int fun(int a, int b, int c, int d)
{
    int m=a-c;
    int n=b-d;
    long int p=(m*m)+(n*n);
    return p;
}
 
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n;
        int flag=0;
        cin>>n;
        long int lim=sqrt(n);
        for(long int i=2; i<=lim; i++)
        {
            if(n%i==0)
            {
                cout<<"no"<<endl;
                flag=-1;
                break;
            }
        }
        if(flag=0)
            cout<<"yes"<<endl;
    }
    return 0;
}