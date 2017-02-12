#include <stdio.h>

int main()
{
    int n,i,a[100],l,median;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        l=strlen(a);
        if(l==1)
        {
            median=a[1];
            printf("%d",median);
            break;
        }
        else if(l%2==0)
        {
            median=(a[l/2]+a[(l/2)-1])/2;
            printf("%d",median);
            break;
        }
        else
        {
            median=a[(l+1)/2];
            printf("%d",median);
            break;
        }
    }

return 0;   

}