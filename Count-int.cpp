#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n;
    cin>>t;
    int zero=0, pos=0, neg=0;
    while(t--)
        {
        cin>>n;
        if(n==0)
            zero++;
        else if(n>0)
            pos++;
        else
            neg++;
    }
    float z=zero/n;
    float p=pos/n;
    float ngtv=neg/n;
    cout<<p<<endl<<ngtv<<endl<<z<<endl;
    return 0;
}

