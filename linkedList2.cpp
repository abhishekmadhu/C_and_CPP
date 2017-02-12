/*Problems With this code:
1. Unexplained need of "-2" instead of "-1" in line 78
    "while(j<position-2)" 
2. Code dosen't run if we want a linked list with only one node
    and then add more nodes to it. Shows segmentation fault. Why??

*/

#include <bits/stdc++.h>
using namespace std;

struct stu
{
    int roll;
    int marks;
    struct stu *next = NULL;
};

int main()
{
    struct stu *start=NULL, *newNode, *currNode=NULL;
    char p='y';
    int i=1;

    
    //create

    while(p == 'y' || p == 'Y')
    {
        printf("Enter node %d\n",i++);
        newNode=(struct stu*)malloc(sizeof(struct stu));
        scanf("%d%d", &newNode->roll, &newNode->marks);
        if(start==NULL)
        {
            start=newNode;
        }
        else
        {
            currNode->next=newNode;
        }
        currNode=newNode;
        printf("Do you wanna add more nodes?(Y/N)");
        fflush(stdin);
        cin>>p;
        }

    printf("\n");


    //display

    struct stu *latestNode=NULL;
    latestNode = start;
    do
    {
        printf("Roll no %d got %d marks\n", latestNode->roll, latestNode->marks);
        latestNode = latestNode->next;
    }while(latestNode->next != NULL);

    if (latestNode->next == NULL)
    {
        printf("Roll no %d got %d marks\n", latestNode->roll, latestNode->marks);
    }


    //insertion

    struct stu *insertNode=NULL, *currentNode;
    int position, j=0;
    printf("Enter the position you wanna add a node\n");
    scanf("%d", &position);
    printf("Enter the Roll No. and the marks:\n");
    insertNode = (struct stu*)malloc(sizeof(struct stu));
    scanf("%d%d", &insertNode->roll, &insertNode->marks);

    currentNode=start;

    while(j<position-2)     //Why "-2" instead of "-1"???????
    {
        currentNode=currentNode->next;
        j++;
    }

    insertNode->next = currentNode->next;
    currentNode->next =insertNode;


    //display again after insertion

    struct stu *latestNode2=NULL;
    latestNode2 = start;
    do
    {
        printf("Roll no %d got %d marks\n", latestNode2->roll, latestNode2->marks);
        latestNode2 = latestNode2->next;
    }while(latestNode2->next != NULL);

    if (latestNode2->next == NULL)
    {
        printf("Roll no %d got %d marks\n", latestNode2->roll, latestNode2->marks);
    }


    return 0;
}






















































/*




















This is shit, interesting but bullshit  -_-



































































fffffffffuuuuuuuuccccccccccccckkkkkkkkkkkkkkkk all who read this fucking code











































































go and die a painful death fucker




























































may you body rot in earth, and your soul in hell




































































may your blood clean the altar of Satan












































































die bitch, die. Why don't you!


































fuuuuuuuuuuuccccccccccccccckkkkkkkkkkkkkkkkkkk youuuuuuuuuuuuuuuuuuuuuuuuu agaaaaaaaaaaaaaaaaaaaaiiiiiiiiiiiiiiinnnnnn

























































motherfuckah



















































*/