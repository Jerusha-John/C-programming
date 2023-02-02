//Linked Stack
#include<stdio.h>
#include<stdlib.h>
struct stack{
	int data;
	struct stack *next;
};
struct stack *top=NULL;
void display()
{
	struct stack *t;
	t=top;
	if(t==NULL)
	{
		printf("List is empty\n");
		return;
	}
	while(t!=NULL)
	{
		printf("%d\n",t->data);
		t=t->next;
	}
	printf("\n\n");
}
void push(int e)
{
	struct stack *t;
	t=(struct stack *)malloc(sizeof(struct stack));
	t->data=e;
	t->next=top;
	top=t;
}
void pop()
{
	if(top==NULL)
	{
		printf("Linked stack is empty");
	}
	else
	{
		printf("%d\n",top->data);
		top=top->next;
	}
}
int main()
{
	int ch,e;
	while(ch!=4)
	{
		printf("1.push\n2.pop\n3.display\n4.exit\n Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the element to be inserted:");
				scanf("%d",&e);
				push(e);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
		}
	}
	return 0;
}
