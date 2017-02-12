#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int s, sg, fg, d, t;
        cin>>s>>sg>>fg>>d>>t;
        int rs=s+((d*50)/t);
        int son=abs(rs-sg);
        int dad=abs(rs-fg);

        if(son>dad)
            cout<<"FATHER"<<endl;
        else if(son<dad)
            cout<<"SEBI"<<endl;
        else
            cout<<"DRAW"<<endl;
    }
    return 0;
}
