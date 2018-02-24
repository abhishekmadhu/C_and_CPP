/*
Contest: FEB-LTIME
Host: CodeChef
Problem: HILLS
Current Submission Status : WA
*/




#include <bits/stdc++.h>
#define MAX 110
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		printf("test case:%d\n", t);
	    
	    hello:
	    int n, count;
	    long int u,d;
	    long int h[MAX];
	    
	    count==0;
	    
	    cin>>n>>u>>d;
	    for(int i=1; i<=n; i++){
	        
	        cin>>h[i];
	        
	        if(i>1){
	            
	            if(h[i] == h[i-1]){
	                    
	                }
	            
	            else if(h[i] > h[i-1]){
	                
	                if((h[i] - h[i-1]) > u){
	                	count=2;
	                    printf("count=%d ans=%d\n", count,i-1);
	                    goto hello;
	                }
	            }
	            
	            else if(h[i] < h[i-1]){
	                if(h[i] == h[i-1]){
	                    
	                }
	                else if((h[i-1]-h[1]) > d){
	                    
	                    count++;
	                    
	                    if(count==2){
	                        printf("count=%d ans=%d\n", count,i-1);
	                        goto hello;
	                    }
	                }
	            }
	        }
	        if(i==n+1){
	            if(count<=1)
	    	        printf("ans=%d\n", n);
	        }
	    }
	}
	return 0;
}
