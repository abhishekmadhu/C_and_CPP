//unsolved and incomplete

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define RANGE 50
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

int main()
{
    int tc, totalTime, somoi, netUsed, n, k, cost;
    cin>>tc;
    while(tc--)
    {
        cost=totalTime=0;
        cin>>n>>k;
        for(int i = 1; i<=n; i++)
        {
            cin>>somoi>>netUsed;
            if(totalTime>k)
            {
                cost+=(somoi*netUsed);
            }
            else if(totalTime<k && (totalTime+somoi)>k)
            {
                cost+=((k-totalTime)*netUsed);
            }
        }
        cout<<cost<<endl;
    }


    return 0;
}
