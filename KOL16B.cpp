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

/*
bool bin[RANGE]={0};
bool appa[RANGE]={0};

int binary(ll a)
{
    int i=0;
    while(a!=0)
    {
       bin[i]=a%2;
       if(i<15)
        appa[i]=0;
       else
        appa[i]=a%2;
       a=a/2;
       i++;
    }
    return i;
}

void print_appa(int length)
{

    for(int p = length-1; p>=0; p--)
        cout<<bin[p];
}

void print_bin(int length)
{
    for(int p = length-1; p>=0; p--)
        cout<<bin[p];
}

void printBinaryOf(int n)
{
    int length = binary(n);
    for(int p = length-1; p>=0; p--)
        cout<<bin[p];
}

int main()
{
    int t, length;
    ll n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        length = binary(n);
        for(int i=0; i<16; i++) //change first 16 bits of appa to 0
        {
            appa[i] = 0;
        }

        print_appa(length);
        cout<<endl;
        print_bin(length);
    }
    return 0;
}
*/

int main()
{
    int t, z , length, a[100010], b[100010];
    ll n,p,k,q,j;
    cin>>t;
    z=1;
    while(t--)
    {
        cin>>n;
        k=n;
        q=0;

        while(n--)
        {
            cin>>j;
            p=j%65536;
            j=j-p;
            a[q] = p;
            b[q] = j>>16;
            q++;
        }

        //RESULTS

        cout<<"Case "<<z<<":"<<endl;
        z++;
        for(int i=0; i<k; i++)
        {
            cout<<a[i];
            if(i!=k-1)
                cout<<" ";
        }
        cout<<endl;
        for(int i=0; i<k; i++)
        {
            cout<<b[i];
            if(i!=k-1)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

