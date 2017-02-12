#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int sum1=sum2=0;
    int mat[500][500]={0};
    for(int i=1; i<=n; i++)
        {
        for(it j=1; j<=n; j++)
            {
            cin>>k;
            if(i==j)
                {
                sum1+=k;
            }
            if(i+j == n+1)
                {
                sum2+=k;
            }
        }
    }
    cout<<abs(sum1-sum2)<<endl;
    return 0;
}
