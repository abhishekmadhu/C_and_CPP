/*

@uthor: abhishekMadhu
handle: coder_nigga
UEM,KOLKATA


*/
/*
//unsolved and incomplete
//MARCHA1 for 2009
//https://www.codechef.com/problems/MARCHA1
*/
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pdd pair<double,double>
#define X first
#define Y second
#define REP(i,a) for(int i=0;i<a;++i)
#define REPP(i,a,b) for(int i=a;i<b;++i)
#define FILL(a,x) memset(a,x,sizeof(a))
#define foreach( gg,itit )  for( typeof(gg.begin()) itit=gg.begin();itit!=gg.end();itit++ )
#define mp make_pair
#define pb push_back
#define all(s) s.begin(),s.end()
#define present(c,x) ((c).find(x) != (c).end())
const double EPS = 1e-8;
const int mod = 1e9+7;
const int N = 1e6+10;
const ll INF = 1e18;


bool jBitNotSet(int j, int n)
{
    return ((n>>j)%2);
}


int main()
{
    int t,n,m,flag,sum,i,j,a[30];
    cin>>t;
    while(t--)
    {
        flag = 0;
        cin>>n>>m;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(i=1; i<=pow(2,n); i++)
        {
            sum = 0;
            for(j=0 ; j<n; j++)
            {
                if(!jBitNotSet(j,i))
                {
                    sum += a[j];
                }

                if (sum == m)
                {
                    cout<<"Yes\n";
                    flag = -1;
                    break;
                }
            }
        }
        if(flag == 0)
            cout<<"No\n";

    }

    return 0;
}

















/*int main()
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
*//*
	}

	return 0;
}
*/
