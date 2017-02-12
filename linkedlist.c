#include <stdio.h>

typedef struct record
{
	int value;
	struct record *next;
} NODE;

void append (int data);
void display();

NODE *start = NULL;

void main()
{
	int prompt,data;
	do(printf("\nEnter <1> to add Node to list,");)
}