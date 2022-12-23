#include<stdio.h>

#include<stdlib.h>
#define N 10
int stack[N];
int top=-1;
void push(int item);
int pop();
int peek();
int isempty();
int isfull();
void display();
main()
{
int choice,item;
while(1)
{
printf("1.PUSH\n");
printf("2.POP\n");
printf("3.Display the top element\n");
printf("4.Display all stack element\n");
printf("5.quit\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
	printf("enter the item to pushed:");
	scanf("%d",&item);
	push(item);
	break;
	case 2:
	item=pop() ;
	printf("popped item is %d\n", item);
	break;
	case 3:
	printf("item at the topis %d\n",peek());
	case 4:
	display();
	case 5:
	exit(1);
	default:
	printf("wrong choice\n");
	}
	}
	}
	void push(int item)
	{
	if(isfull())
	{
	printf("stack overflow");
	return;
	}
	top=top+1;
	stack[top]=item;
	}
	int pop()
	{
	//int item
	int item;
	if(isempty())
	{
	printf("stack underflow\n");
	exit(1);
	}
	item=stack[top];
	top=top-1;
	return item;
	}
	int peek()
	{
	if(isempty())
	{
	printf("stack underflow\n");
	exit(1);
	}
	return stack[top];
	}
	int isempty()
	{
	if(top==-1)
	return 1;
	else
	return 0;
	}
	int isfull()
	{
	if(top==N-1)
	return 1 ;
	else
	return 0  ;
	}
	void display()
	{
	int i;
	if(isempty())
	{
	printf("stack is empty\n");
	return;
	}
	printf("stack elements :\n\n");
	for(i=top; i>=0; i--)
	printf("%d\n", stack[i]);
	printf("\n");
	getch();
	}