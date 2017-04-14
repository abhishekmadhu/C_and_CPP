/*
@uthor: abhishekMadhu
handle: coder_nigga
UEM,KOLKATA
*/
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
typedef long long ll;

int main()
{
    int t, count;
    string a[5], b[5];
    cin>>t;
    while(t--){
        count = 0;
        
        for(int i=1; i<=4; i++)
            cin>>a[i];
        for(int i=1; i<=4; i++){
            cin>>b[i];
            for(int i=1; i<=4; i++){
                if(a[i]==b[i]){
                    count++;
                }
            }
        }
        if(count >=2){
            cout<<"similar"<<endl;
        }
        else{
            cout<<"dissimilar"<<endl;
        }
    }
    
    return 0;
}