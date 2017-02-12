
/*76. This C Program performs ATM transaction with 50000 balances in hand. The types of ATM
transaction are:
1) Balance checking
2) Cash withdrawl ( e.g 500 = 5 x 100; 900 = 1 x 500 + 4 x 100; 1000 = 2 x 500; 1700 = 1 x 1000 +
1 x 500 + 2 x 200; 5000 = 4 x 1000 + 2 x 500
3) Cash deposition.
You can opt any of the above transaction according to your need of transaction.*/


#include <stdio.h>
#include <stdlib.h>


void bal_inq(long int balance)
{
	printf("Your current account balance is %ld\n", balance);
}
long int withdrawl(long int balance)
{
	long int withdrawl,wdr,n100,n500=0,n1000;
	printf("Ener withdrawl amount(multiple of 100): ");
	scanf("%ld",&wdr);
	withdrawl=wdr;
	if ((wdr%100)==0 && wdr<=balance)
	{
		/*amount selection begins*/
		if(wdr>=1500)
		{
			n1000=wdr/1000;
			wdr-=1000*n1000;
			n500=wdr/500;
			wdr-=500*n500;
			n100=wdr/100;
		}

		else
		{
			n1000=0;
			n500=wdr/500;
			wdr-=500*n500;
			n100=wdr/100;
		}
		balance-=withdrawl;
		printf("1000=%ld;500=%ld;100=%ld\n",n1000,n500,n100 );
		printf("Remaining Balance=%ld\n", balance);
		printf("Please Collect Cash\n");
		return balance;
	}
}
long int deposition(long int balance)
{
	
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
	printf(" 3 \t 2 \t 5  \n");
	printf("Total= INR 6300.00\nIs this correct?(Y/N)");
	
	scanf(" %c", &input);
	
	if(input=='Y' || input=='y')
	{
		printf("Transaction successful\n");
		balance+=6300;
		return balance;
	}
	else if(input=='N' || input=='n')
		printf("Re-insert Card and Cash and try again\n");
	else
		printf("Wrong Code\n");
}
int main()
{
  long int balance=50000;
  int a,PIN;
  char cont='y';
  while(cont=='y' || cont=='Y')
    {
      printf("What do you want to perform?\n");
      printf("1. Balance Enquiry\n");
      printf("2. Cash Withdrawl\n");
      printf("3. Cash Deposition\n");
      printf("Enter your choice(1,2 or 3)\n");
      scanf("%d",&a);
      
      printf("Enter your PIN\n");
      
      printf("Default PIN for this card is 0000\n");
      scanf("%d",&PIN);
      if(PIN==0000)
	{
	  switch(a)
	    {
	    case 1: bal_inq(balance);
	      break;
	    case 2: balance=withdrawl(balance);
	      break;
	    case 3: balance=deposition(balance);
	      break;
	    default: printf("Oopsie! Try Again Later\n");
	    }
	}
      else
	printf("Wrong PIN! Re-insert the card and try again\n");
      printf("Do you want another transaction?(y/n)");
      scanf(" %c", &cont);
    }
  return 0;
}
