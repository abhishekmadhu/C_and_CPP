//https://www.codechef.com/FEB17/problems/CHEFAPAR

#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int k;
	    int due=0;
	    long int n;
	    cin>>n;
	    while(n--)
	    {
	        
	        cin>>k;
	        if(k==0)
	        {
	            due+=1100;
	        }
	        else if(k==1 && due!=0)
	        {
	            due+=100;
	        }
	        
	    }
	    cout<<due<<endl;
	    
	}
	
	
	return 0;
}
