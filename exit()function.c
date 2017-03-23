#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    if(t%2==0)
    {
        printf("Great, its even\n");
        exit(550);
    }
    else if(t%2==1)
    {
        printf("Great, its odd\n");
        exit(500);
    }
    return 0;
}
