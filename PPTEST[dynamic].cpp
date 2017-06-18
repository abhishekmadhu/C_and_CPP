	/*
	The incomplete PPTEST problem to maximise the profit earned.


	Pointing any error out won't go unappreciated :)
	*/

	/*
	Author: @coder_nigga
	14 July 2017
	11:59 PM IST
	*/

	/*
	            a[i][j]=max(a[i-1][j] , val[i]+a[i-1][j-i]);
	*/

	#include <bits/stdc++.h>
	#define MAX_ROW	110
	#define MAX_COL 110
	#define MAX 110
	#define max_time w
	#define no_of_sub n

	using namespace std;

	int main(){
		int t;

		long long int a[MAX_ROW][MAX_COL];
		for(int i=0; i<MAX_ROW; i++){
			a[i][0]=0;
		}
		for(int j=0; j<MAX_COL; j++){
			a[0][j]=0;
		}

		int val[MAX][2];

        cin>>t;

		while(t--){
            int n,w,c,p,t;
            cin>>n>>w;

            for(int i=1; i<=no_of_sub; i++){
            cin>>c>>p>>t;
            val[i][1] = c*p;
            val[i][0]=t;
            }

            for(int i=1; i<=no_of_sub; i++){
                for(int j=1; j<=max_time; j++){
                    if(j>=val[i][0]){
                    	a[i][j] = max(val[i][1]+a[i-1][j-val[i][0]] , a[i-1][j]);
                    }
                    else{
                        a[i][j]=a[i-1][j];
                    }
                    /*if(i>0)

						printf("%6d", a[i][j]);*/
				}
				/*if(i>0)
					printf("\n\n");*/
            }

			cout<<a[no_of_sub][max_time]<<endl;


		}

		return 0;
	}
