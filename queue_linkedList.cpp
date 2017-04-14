/* 
 * File:   queue_linkedList.cpp
 * Author: abhishek
 *
 * Created on 6 April, 2017, 12:04 AM
 * linkedList Queue siyappa
 */

#include <bits/stdc++.h>
using namespace std;

/*
 * 
 */

typedef struct nd{
    int data;
    struct nd *next;
}node;


node *start = NULL;
node *front = NULL;
node *last = NULL;
int noOfElements = 0;

void enqueue(int a){
    node *newNode;
    newNode = (node *)malloc(sizeof(node));
    if(noOfElements == 0){
        newNode->data = a;
        start = newNode;
        front = start;
        last = start;
        newNode->next = NULL;
        noOfElements++;
    }
    else{
        
    if(newNode == NULL){
        cout<<"Overflow condition\n";
        exit(0);
    }
    else{
        newNode->data = a;
        last->next = newNode;
        newNode->next = NULL;
        last = newNode;
        noOfElements++;
        
    }
    }
    
}

int dequeue(){
    if(noOfElements == 0){
        cout<<"Underflow Condition\n";
        exit(1);
    }
    else{
        int val = front->data;
        node *temp = front;
        front = front->next;
        free(temp);
        
        
        noOfElements--;
        return val;
    }
}

int peek(){
    if(noOfElements == 0){
        cout<<"Underflow Condition\n";
        exit(2);
    }
    else{
        return front->data;
    }
}

int main() {
    
    char cont = 'Y';
    while(cont != 'n' && cont != 'N'){
    int n;
    cout<<"1. Enqueue\n";
    cout<<"2. Dequeue\n";
    cout<<"3. Peek\n";
    cin>>n;
    switch(n)
    {
        case 1: 
            int k;
            cin>>k;
            enqueue(k);
            break;
        case 2:
            cout<<"Dequeued value is "<<dequeue();
            break;
        case 3:
            cout<<"Peeked val is "<<peek();
            break;
        defult:
            cout<<"Try again later\n";
        
    }
    cout<<"Wanna continue? (Y/N)\n";
    cin>>cont;
    }
    
    return 0;
}

