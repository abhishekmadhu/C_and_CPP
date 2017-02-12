/*
Question : https://www.codechef.com/problems/COMM3
Status: Done
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
        int max,x1,y1,x2,y2,x3,y3;
        cin>>max>>x1>>y1>>x2>>y2>>x3>>y3;
        int max2=max*max;
        long int d12=fun(x1,y1,x2,y2);
        long int d13=fun(x1,y1,x3,y3);
        long int d23=fun(x2,y2,x3,y3);
        if((d12<=max2 && d13<=max2)||(d12<=max2 && d23<=max2)||(d13<=max2 && d23<=max2))
            cout<<"yes"<<endl;
        else
            cout<<"no";
    }
    return 0;
}