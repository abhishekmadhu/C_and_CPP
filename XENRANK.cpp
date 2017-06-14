#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int u,v;
        cin>>u>>v;
        int k = (v*(v+1)/2) + (u*v) + (((u+1)*(u+2))/2);
        cout<<k<<endl;
    }
    return 0;
}
