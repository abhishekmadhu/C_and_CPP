#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a[4][4]={0},max=0;
        for(int i=1; i<=3; i++)
        {
            for(int j=1; j<=3; j++)
            {
                cin>>a[i][j];
            }
        }
        long long int r1=a[1][1]+a[1][2]+a[1][3];
        long long int r2=a[2][1]+a[2][2]+a[2][3];
        long long int r3=a[3][1]+a[3][2]+a[3][3];
        
        long long int c1=a[1][1]+a[2][1]+a[3][1];
        long long int c2=a[1][2]+a[2][2]+a[3][2];
        long long int c3=a[1][3]+a[2][3]+a[3][3];
        
        long long int max1=(r1>r2)?r1:r2;
        long long int max2=(r3>max1)?r3:max1;
        long long int max3=(c1>c2)?c1:c2;
        long long int max4=(c3>max3)?c3:max3;
        
        max=(max2>max4)?max2:max4;
        if(max%2==0)
            cout<<max-1<<endl;
        else
            cout<<max<<endl;
    }
    return 0;
}