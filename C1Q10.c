//Reverse a string using Stack 
#include<stdio.h>
#include<string.h>
char stack[20];
int top=-1;
void push(char ch)
{
	if(top+1==20)
	{
	printf("Stack is full");
	}
	else
	{
	top=top+1;
	stack[top]=ch;
	}
}
void pop()
{
	if(top==-1)
	{
	printf("\n Stack is empty");
	}
	else
	{
	printf("%c\t",stack[top]);
	top=top-1;
	}
}
int main()
{
	char a[20];
	int i;
	printf("Enter a string:");
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
	push(a[i]);
	}
	while(top!=-1)
	{
	pop();
	}
	return 0;

}

