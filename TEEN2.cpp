/*
Question: https://www.codechef.com/IEMCO16/problems/TE3N
second way of solving
Status: WA
*/

    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long int
    #define mm 100000
     
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    	
    	string s;
    	cin>>s;
    	int pos=0;
    	pos=s.find("IEM");
    	while(pos>=0)
    	{
    		s.erase(pos,3);
    		pos=s.find("IEM");
    	}
    	if(s.length())
    	cout<<"No"<<endl;
    	else
    	cout<<"Yes"<<endl;
    }
    } 