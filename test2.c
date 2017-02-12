#include <stdio.h>

int main()
{
    int i,n,temp;
    char a[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%c",&a[i]);
    for(i=0; i<=n/2; i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    printf("The reverse array id:\n");
    for(i=0; i<n; i++);
        printf("%c",a[i]);
    return 0;
}
