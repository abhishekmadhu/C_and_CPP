//unsolved and incomplete

#include <bits/stdc++.h>
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

int main()
{
    int t;
    ll a[100010] = {-1};
    cin>>t;
    while (t--)
    {
        long int min = 1000000001, max=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            scanf("%lld", &a[i]);
            if(a[i]>max)
                max = a[i];
            if(a[i]<min)
                min = a[i];
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]>max || a[i]<<min){
                cout<<a[i]<<endl;
                break;
            }
        }
}