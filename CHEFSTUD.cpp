//https://www.codechef.com/LTIME42/problems/CHEFSTUD

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char k[100001]={0};
        cin>>k;
        int l=strlen(k), count=0;
        for(int i=0; i<l; i++)
        {
            if(k[i]=='<' && k[i+1]=='>')
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
