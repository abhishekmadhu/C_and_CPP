/*
* https://www.hackerearth.com/challenge/competitive/april-easy-17/algorithm/mancunian-and-pandigital-numbers-1/
* Program that printd the number of PANDIGITAL numbers in a range
*
* @coder_nigga
*
*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int digits(int a){
    int count = 0;
    while(a){
        a=a/10;
        count++;
    }
    return count;
}

int pan(int n, int digits){
    int a[12]={0};
    int flag = 1;
    int c;
    while(n){
        c=n%10;
        n=n/10;
        if(a[c]==0)
            a[c]++;
        else{
            flag = 0;
            break;
        }
    }
    for(int i=1; i<=digits; i++){
        if(a[i]!=1){
            flag=0;
            break;
        }
    }
    return flag;
}

int main()
{
    int t,l,r;
    cin>>t;
    while(t--){
        
        cin>>l>>r;
        
        int count = 0;
        for(int i=l; i<=r; i++){
            if(pan(i,digits(i))){
                count++;
            }
        }
    
        cout<<count<<endl;
    }
    return 0;
}
