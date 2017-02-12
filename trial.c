#include <stdio.h>
int main()
{
	int a; unsigned int *p;
	a=400;
	p=&a;
	printf("%x\n",p);
	printf("%u\n",p);
}