#include <bits/stdc++.h>
using namespace std;

int min(int a, int b)
{
    int k = (a>b)? b:a;
    return k;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, xEven=0, yEven = 0, xOdd = 0, yOdd = 0;
        cin>>n;
        char x[1000001], y[1000001];
        for(long int i=1; i<=n; i++)
        {
            cin>>x[i];
            if(i%2==0)
            {
                xEven+=x[i];
            }
            else
            {
                xOdd+=x[i];
            }
        }
        for(long int i=1; i<=n; i++)
        {
            cin>>y[i];
            if(i%2==0)
            {
                yEven+=y[i];
            }
            else
            {
                yOdd+=y[i];
            }
        }
        
//        cout<<min((xOdd + yEven),(yOdd + xEven))<<endl;

        if((xOdd + yEven) > (yOdd + xEven))
            cout<<yOdd+xEven<<endl;
        else
            cout<<xOdd+yEven<<endl;
        
    }
    return 0;
}