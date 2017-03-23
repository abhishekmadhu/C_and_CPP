//https://www.hackerrank.com/contests/university-codesprint-2/challenges/separate-the-numbers

#include <bits/stdc++.h>
using namespace std;
#define fn firstNumber
#define sn secondNumber

int main() {

    int q;
    cin>>q;
    while(q--){
        char s[100]= {0};
        cin>>s;
        int length = strlen(s);
        int flag = 0;
        
//        cout<<"Length = "<<length<<endl;

        
        
        for(int k=0; k<=length/2; k++){
            
            long long int firstNumber = 0, secondNumber = 0;

            int i;
            for(i=0; i<=k; i++){
                fn *= 10;
                fn += (int)s[i]-'0';
                
            }
            cout<<"fn "<<k+1<<" = "<<fn<<endl;
            
            for(int j=0; j<=k; j++){      //check the EndRange for errors in case of wrong output
                sn *= 10;
                sn +=(int)s[i]-'0';
                
            }
            cout<<"sn "<<k+1<<" = "<<sn<<endl;
            
            if(sn - fn == 1){
                cout<<"YES "<<fn<<endl<<endl<<endl;
                flag = -1;
                break;
                
            }
        }
        if(flag == 0)
            cout<<"NO"<<endl<<endl<<endl;
        
    }
    return 0;
}
