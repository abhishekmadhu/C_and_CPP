#include <fstream>

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

int main () {

  ifstream myfile;

  FILE* out_file = fopen("out.txt", "w");//open file in write only mode
  myfile.open("in.txt");

    int t,l,r;
    myfile>>t;
    //cout<<t<<endl;
    int k=1;
    while(t--){

        myfile>>l>>r;
        //cout<<l<<" "<<r<<endl;

        int count = 0;
        for(int i=l; i<=r; i++){
            if(pan(i,digits(i))){
                count++;
            }
        }

        fprintf(out_file, "%d. %d\n", k, count);
        k++;
    }


    int p=clock();
    cout<<"TIME ON CLOCK = "<<p;
    myfile.close();

    return 0;
}
