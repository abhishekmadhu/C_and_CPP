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
    int t,y=0,n=0,i=0;
    char a[1000010]={0};
    
    
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        cin>>n;
        for(int p=0; p<n; p++)
        {
            scanf("%c", &a[p]);
        }
        
        for(int p=0; p<n; p++)
        {
            if (a[p]=='Y')
                y=-1;
            else if(a[p] == 'N')
                n = -1;
            else if(a[p] == 'I')
                i=-1;
        }
        if (i == -1)
        {
            cout<<"INDIAN"<<endl;
//            continue;
        }
        if (y == -1)
        {
            cout<<"NOT INDIAN"<<endl;
//            continue;
        }
        if(n==-1 && y==0 && i==0)
        {
            cout<<"NOT SURE"<<endl;
//            continue;
        }
//        cout<<"babbajabba"<<endl;
//        cout<<t<<endl;
        
    }
    return 0;
}