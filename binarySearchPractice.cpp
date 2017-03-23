#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, searchval;
    int a[100];
    cout<<"Enter no of values : ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers in ascending order : \n ";
    for(int i=0; i<n; i++)
        cin>>a[i];

    cout<<"Enter searchValue : ";
    cin>>searchval;

    //binary search logic starts

    int topval = n-1, bottomval = 0 , midval = 0;
    while(a[midval] != searchval)
    {
        midval = (a[topval] + a[bottomval] + 1)/2;
        if(a[midval] > searchval)
        {
            topval = midval-1;
        }
        else if (a[midval] < searchval)
        {
            bottomval = midval + 1;
        }
        else if (a[midval] == searchval)
        {
            cout<<"Value present at position "<<midval + 1<<endl;
            break;
        }

    }
    return 0;

}
