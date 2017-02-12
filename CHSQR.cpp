//https://www.codechef.com/problems/CHSQR

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,p;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        int pcolumn=(k/2)+1;

        for(int i=1; i<=k; i++)
        {
            p=pcolumn;


            for (int j=1; j<=k; j++)
            {
               if(p!=0)
               {
                   cout<<p--<<" ";

               }
               else
               {
                    p=k;
                    cout<<p--<<" ";

               }
            }
            cout<<endl;
            if(pcolumn!=0)
                pcolumn--;
            else
                pcolumn=k;
        }
    }
}
