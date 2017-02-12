#include<bits/stdc++.h>
using namespace std;

int prime(long int a)
{
    int k=0;
    for(int i=2; i<a; i++)
    {
        if(a%i==0)
        {
            k=1;
            break;
        }
    }
    return k;
}

int main()
{
    int t=12, sum=0;
    while(t--)
    {
        int k;
        cin>>k;
        sum+=k;
    }
    int j=prime(sum);
    if(j==0)
        cout<<"lyadhkhor"<<endl;
    else
        cout<<"topper"<<endl;
    return 0;
}
