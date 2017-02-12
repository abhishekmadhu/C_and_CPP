#include<stdio.h>
int main()
{
  int a,i,j,k;
  a=4;
  for(i=4; i>=1; i--)
    {
      for(j=1; j<i; j++)
	{
	  printf(" ");
	}
    
	{
	  printf("*");
	}
	for(k=0; k<=2*(4-i)-2; k++)
	  printf("*");
	if(i!=4)
	  printf("*");
      printf("\n");
    }
  return 0;
}
