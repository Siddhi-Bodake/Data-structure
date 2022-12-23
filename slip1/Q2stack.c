#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void main()
{
    int choice,item;
    while(1)
 {
        printf("Enter your choice:\n 1.push\n 2.pop\n 3.empty\n\n");
        scanf("%d",&choice);
    switch(choice)
    {
        case 1: push(item);
        break;
        case 2: pop();
        break;
        case 3: empty();
        break;
        default: printf("Invalid choice");
    
    }
 }
}

    void push( int item) 
    {
        printf("Enter the data:\n");
        scanf("%d",&item);
        if(top==(N-1))
        {
            int item;
            printf("Overflow\n");
        }
        else
        {

            top++;
            stack[top]=item;
            
        }
    }
    void pop()
    {
        int item;
        if(top==-1)
        {
            printf("Underflow\n");

        }
        else
        {
            item=stack[top];
            top--;
        }
    }
    void empty()
    {
        if(top==-1)
        {
            
            printf("Stack is empty\n");
            
        }
        else
        {
            printf("Stack is not empty\n");
            return;

        }
    }
    
    
    
    
