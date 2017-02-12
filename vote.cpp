#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter age of first person: ";
	cin>>a;
	cout<<"Enter the age of the second person: ";
	cin>>b;
	if(a>18)
	{
		cout<<"1st person can vote"<<endl;
	}
	else
	{
		cout<<"1st person cannot vote"<<endl;
	}
	if(b>18)
	{
		cout<<"2nd person can vote"<<endl;
	}
	else
	{
		cout<<"2nd person cannt vote"<<endl;
	}
	
	cout<<"Made by Ayan";
	return 0;
}