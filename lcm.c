#include<stdio.h>



int main()
{
  int a,b,i,c;
  scanf("%d%d",&a,&b);
  c=(a>b)?a:b;
  for(i=c; i<=(a*b); i++)
    {
      if(i%a==0 && i%b==0)
   	 {
      	printf("%d\n", i);
	      break;
	   }
    }
    return 0;
}
