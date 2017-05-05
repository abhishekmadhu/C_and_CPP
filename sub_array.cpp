            #include <bits/stdc++.h>
            #define MAX 100
            using namespace std;

            int main(){
                int n;
                int a[MAX] = {0};
                cout<<"How many numbers? : ";
                cin>>n;
                cout<<"Enter the numbers:\n";
                for(int i=1; i<=n; i++){
                    cin>>a[i];
                }
                int k = n;

                /*while(k--){
                    for(int i=1; i<=n-k; i++){

                    }
                }*/

                for(int at_a_time=1; at_a_time<=n; at_a_time++){
                    for(int start=1; start<=n-at_a_time+1; start++){
                        for(int j=start; j<=start+at_a_time-1; j++){
                            printf("%d ", a[j]);
                        }
                        printf("\n");
                        //cout<<"loop 2 complete, start = "<<start<<endl;
                    }
                    //cout<<"loop 1 complete, at_a_time = "<<at_a_time<<endl;
                }
                return 0;
            }
