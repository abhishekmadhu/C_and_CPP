//CLEANUP
//unsolved and incomplete

#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int t,n,m,p[10010] = {0}, chef[10010]={0},assistant[10010] = {0}, j, x, y, k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;

	    for (int i=1; i<=m; i++)
        {
            cin>>k;
            p[k]=-1;
        }
        j=1;
        x=1;
        y=1;
        for(int i=1; i<=n; i++)
        {
            if(p[i]==0)
            {
                if(j%2==1)
                {
                    chef[x]=i;
                    x++;
                }
                else
                {
                    assistant[y] = i;
                    y++;
                }
            }

        }
        for(int i=1; i<=x; i++)
            cout<<chef[i]<<" ";
        cout<<endl;
        for(int i=1; i<=y; i++)
            cout<<assistant[i]<<" ";
        cout<<endl;

/*
        sort(q,q+m-n);
        for(int i=0; i<n-m; i++)
        {
            if(i%2==0)
            printf("%d ", q[i]);
        }
        printf("\n");
        for(int i=0; i<n-m; i++)
        {
            if(i%2==1)
            printf("%d ", q[i]);
        }
        cout<<endl;
*/
	}

	return 0;
}
