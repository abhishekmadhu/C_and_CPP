//ACCEPTED

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,x;
	cin>>a>>b;
	x=a-b;
	if(x%10==9)
	{
	    cout<<x-1<<endl;
	}
	else
	    cout<<x+1<<endl;
	
	return 0;
}	

//CODE IN ADA Gnat 4.9.2

/*

With Ada.Text_IO; Use Ada.Text_IO;  
With Ada.Integer_Text_IO; Use Ada.Integer_Text_IO;

procedure Program is

t,i,j,k : integer;
begin
    Ada.Integer_Text_IO.Get(t);
    while t/=0 loop
        Ada.Integer_Text_IO.Get(i);
        Ada.Integer_Text_IO.Get(j);
        k := i-j;
        if k mod 10 = 9 then
            Put_Line(Natural'Image(k-1));
        else
            Put_Line(Natural'Image(k+1));
        end if;
    t=t-1;
    end loop;

end Program;

*/