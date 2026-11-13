#include<stdio.h>
#include<string.h>
#define MAX 5

int stack[MAX];
int top=-1;

void push();
void pop();
void display();

void push()
{
	int item;
	if(top==MAX-1)
	{
		printf("\n STACK OVERFLOW!\n");
	}
	printf("\n enter the element to push:");
	scanf("%d",&item);
	top++;
	stack[top]=item;
}
void pop()
{
	int item;
	if(top==-1)
	{
		printf("STACK UNDERFLOW!\n");
		return;
	}
	item=stack[top];
	top--;
	printf("\n deleted element:%d\n",item);
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("\n STACK IS EMPTY.\n");
		return;
	}
	printf("\n stack element are:\n");
	for(i=top;i>0;i--)
	{
		printf("%d\n",stack[i]);
	}
}
int main()
{
	int choice;
	while(1)
	{
		printf("STACK OPERATION MENU\n");
		printf("1.push an element\n");
		printf("2.pop an element\n");
		printf("3.display stack status\n");
		printf("4.exit\n");
		switch(choice)
		{
			case 1:
				push();
				break;
		
			case 2:
				pop();
				break;
			
			case 3:
				display();
				break;
				
			case 4:
				printf("\n exiting program \n");
				return 0;
				
			default:
			printf("\n Invalid choice! please try again\n");		
		}
	}
	return 0;
}



