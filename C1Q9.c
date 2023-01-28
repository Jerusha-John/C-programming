//Implement stack operations using array
#include<stdio.h>
int stack[5];
int top=-1;
void disp()
{
	int i;
	if(top>=0)
	{
		printf("\n The elements in stack: \n");
		for(i=top;i>=0;i--)
		{
			printf("%d\t",stack[i]);
		}
    }
	else
	{
		printf("\n Stack is empty");
	}
}
void push(int val)
{
	if(top+1==5)
	{
	printf("Stack is full");
	}
	else
	{
	top=top+1;
	stack[top]=val;
	printf("%d",stack[top]);
	}
}
void pop()
{
	if(top==-1)
	{
	printf("Stack is empty");
	}
	else
	{
	printf("\n %d deleted",stack[top]);
	top=top-1;
	}
	disp();
}
void peek()
{
	if(top==-1)
	{
	printf("Stack is empty");
	}
	else
	{
	printf("\n %d",stack[top]);
    }
}

int main()
{
	int i,ch,e;
	do
	{
		printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the number to be pushed:");
				scanf("%d",&e);
				push(e);
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				disp();
				break;
			case 5:
				break;		
			    	    	
			 	
		}
    }
	while(ch!=5);
}
