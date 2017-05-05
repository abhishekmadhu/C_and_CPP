/*
@uthor: abhishekMadhu
handle: coder_nigga
UEM,KOLKATA
https://www.codechef.com/APRIL17/problems/ROWSOLD
*/
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
typedef long long ll;

int main()
{
    int t,i, len, nmbr, sum;
    char a[1000010], temp;
    cin>>t;
    while(t--){
        i=1;
        int prev=-1;
        int next=-1;
        nmbr = sum = 0;
        
        cin>>a;
        len = strlen(a);
        
        for(int i=0; i<len; i++){
            if(a[i]=='1'){
                if(prev == -1){
                    prev = i;
                }
                else{
                    next = i;
                }
                if(i==len-1){
                    next = len+1;
                }
                if(next != -1){
                    sum = sum + ((nmbr)*(next-prev));
                }
                prev = next;
            }
            cout<<sum<<endl;
        }
    }
    
    return 0;
}