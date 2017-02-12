//https://www.hackerearth.com/cc1/algorithm/8d5b8e36e3a143e2a0f59c2212eb68cb/

#include <stdio.h>

int main()
{
    long int s,product=1;
    scanf("%ld", &s);
    while(s)
    {
        product*=(s%10);
        s/=10;
 //       printf("product= %ld, s= %ld\n", product, s);
    }

 //   printf("Ans= %ld\n", product);
    return 0;
}
