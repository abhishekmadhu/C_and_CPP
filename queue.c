/*
@coder_nigga
-abhishekMadhu
*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int s[MAX];
int front=-1, rear=-1;

/*
void shiftToLeft()
{
	int i;
	for(i=front; i<rear; i++){
		s[i-1]=s[i];
	}
}
*/

void enqueue(int n)
{
	if(rear==MAX-1)
	{
		printf("OverFlow condition!\n");
		exit(1);
	}
	else{
		rear++;
		s[rear]=n;
		
	}
	
	if(front==-1){
		front++;
	}
}

int deque()
{
	int l;
	if(front==-1){
		puts("Underflow Condition!");
		exit(2);
	}
	else{
		l = s[front];
		front++;
		return l;
		//shiftToLeft();
		
	}
}


int queuePeek()
{
	if(front==-1){
		puts("Underflow Condition!");
		exit(3);
	}
	else{
		return s[front];
	}
}


int main()
{
	int i;
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	
	for(i=1; i<=5; i++)
	{
		printf("Removed %6d\n", deque());
		printf("Peeked %6d\n", queuePeek());
		printf("\n");
	}
	return 0;
}



/*
int main()
{
	int option, temp;
/*	char cont;
	while(cont != 'n' || cont !='N'){		*//*
		scanf("%d", &option);
		switch (option)
		{
			case 1:scanf("%d",&temp);
				enqueue(temp);
				puts("Enqued\n");
			case 2:printf("Dequed %d\n", deque());
			case 3:printf("Peeked value is %d\n", queuePeek());
			default: printf("Try Again\n");
		}
/*		scanf("%c", &cont);
	}*/
/*	
	return 0;
}
*/	
	
	
	
	
	
	
	
	
	
	
	
