//CLEANUP
//unsolved and incomplete

#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int t,n,m,p, q, j;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    p=(int *)malloc(n*sizeof(int));
	    for(int i=0; i<n; i++)
	        p[i]=0;

        for(int i=0; i<m; i++)
        {
            p[scanf("%d")] = -1;
        }

        q=(int *)malloc((n-m+10)*sizeof(int));

        j=0;

        for(int i=0; i<n; i++)
        {
            if(p[i]==0)
            {
                q[j]==i;
                j++;
            }
        }

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

	}

	return 0;
}
