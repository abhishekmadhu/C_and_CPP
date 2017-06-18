        #include <bits/stdc++.h>
        using namespace std;

        int main(){
            int t,p;
            cin>>t;
            while(t--){
                cin>>p;
                int a[12];
                for(int i=0; i<=11; i++){
                    a[i]=pow(2,i);
                }
                int bill = 0, counter=0;

                while(bill<p){
                    int diff = p - bill;
                    if(diff>=a[11])
                        bill+=a[11];
                    else if(diff>=a[10] && diff <a[11])
                        bill+=a[10];
                    else if(diff>=a[9] && diff <a[10])
                        bill+=a[9];
                    else if(diff>=a[8] && diff <a[9])
                        bill+=a[8];
                    else if(diff>=a[7] && diff <a[8])
                        bill+=a[7];
                    else if(diff>=a[6] && diff <a[7])
                        bill+=a[6];
                    else if(diff>=a[5] && diff <a[6])
                        bill+=a[5];
                    else if(diff>=a[4] && diff <a[5])
                        bill+=a[4];
                    else if(diff>=a[3] && diff <a[4])
                        bill+=a[3];
                    else if(diff>=a[2] && diff <a[3])
                        bill+=a[2];
                    else if(diff>=a[1] && diff <a[2])
                        bill+=a[1];
                    else if(diff>=a[0] && diff <a[1])
                        bill+=a[0];
                    counter++;

                }
                cout<<counter<<endl;

            }
            return 0;
        }
