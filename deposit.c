

#include <stdio.h>
int main()
{
	int balance=50000;
	int i,j,k;
	char input;
	printf("Insert Cash(only notes of 100,500 and 1000 INR are accepted)\n");

	printf("Please wait till your notes are analysed\n");
	for (i = 0; i < 65530; i++)
	{
		for(j=0; j<30000; j++)
		{

		}
	}
	printf("Please check the denominations:\n");
	printf("100\t500\t1000\n");
	printf(" 3 \t 2 \t 5 \n");
	printf("Total= INR 6300.00\nIs this correct?(Y/N)");
	scanf("%c",&input);
	if(input=='Y' || input=='y')
	{
		printf("Transaction successful\n");
		balance+=6300;
		return balance;
	}
	else
		printf("Re-insert Card and Cash and try again\n");
	return 0;
}