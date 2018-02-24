/*
Contest: FEB-LTIME
Host: CodeChef
Problem: HILLS
Current Submission Status : WA
*/
int checkPossibility(long int fromHill, long int toHill, long int u, long int d){
	if(toHill == fromHill){
		return 1;
	}

	else if (toHill > fromHill)
	{
		if(toHill - fromHill <= u){
			return 1;
		}
		else
			return 0;	//cannot -- too high
	}

	else if (toHill < fromHill){
		if(fromHill - toHill <= d){
			return 1;
		}
		else{
			return -1;	//need parachute -- too low
		}
	}
}



#include <bits/stdc++.h>
#define MAX 110
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		//printf("test case:%d\n", t);
	    
	    int n, count, a;
	    long int u,d;
	    long int h[MAX];
	    
	    count=0;
	    cin>>n;
	    //cout<<n<<endl;//
	    cin>>u>>d;
	    //cout<<u<<" "<<d<<endl;//

	    for(int i=1; i<=n; i++){
	    	cin>>h[i];
	    }

	    for(int i=2; i<=n; i++){
	    	//cout<<"i="<<i<<endl;
	        
	        //cin>>h[i];
	        
	       if(i>1){
	       		a=checkPossibility(h[i-1], h[i], u, d);

	        	if(a==1){
	        		//printf("Reached %d\n", i);
	        		if(i==n){
	        			//cout<<"n="<<n<<"i="<<i<<endl;//
	        			printf("%d\n", i);
	        		}
	        	}
	        	else if(a==-1){
	        		//printf("Reached %d\n", i);
	        		count++;
	        		if(count==2){
	        		    printf("%d\n", i-1);
	        		}
	        	}
	        	else if (a==0)
	        	{
	        		printf("%d\n", i-1);
	        		break;
	        	}
	       }
	        
	    }   
	 
	}
	return 0;
}