#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s1[110], s2[110];
        int i=0, xtra=0, min=0, diff=0;
        scanf("%s %s", &s1, &s2);
        i=0;
        while(s1[i] != '\0')
        {
            if(s1[i] != s2[i] && s1[i] != '?' && s2[i] != '?')
            {
                diff++;
            }
            if(s1[i] == '?' || s2[i] =='?')
            {
                xtra++;
            }
            i++;
            cout<<diff<<" "<<xtra+diff<<endl;
        }
        return 0;
    }
}