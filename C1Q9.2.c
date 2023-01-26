/*Write a program with functions  to insert a new node
a.  at the beginning of a Singly Linked List.
b.  At the end of the linked list
c.  after a specified element in a linked list.*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
typedef struct node node;
node *head;
void insert1(int e)
{
	if(head==NULL)
	{
		head=(node *)malloc(sizeof(node));
		head->data=e;
		head->next=NULL;
	}
	else
	{
		node *t;
		t=(node*)malloc(sizeof(node));
		t->data=e;
		t->next=head;
		head=t;
	}
}
void insert2(int e)
{
	node *t;
	t=head;
	while(t->next!=NULL)
		{
			t=t->next;
		}
	t->next=(node*)malloc(sizeof(node));
	t->next->data=e;
	t->next->next=NULL;
}
void disp()
{
	node *t;
	if(head==NULL)
	{
		printf("List is empty");
	}
	else
	{
		t=head;
		while(t!=NULL)
		{
			printf("%d\t",t->data);
			t=t->next;
		}
	}
}
void insert3(int m,int e)
{
	node *t;
	node *q;
	t=head;
	int f=0;
	while(t!=NULL)
	{
		if(t->data==m)
		{
			q=(node *)malloc(sizeof(node));
			q->data=e;
			q->next=t->next;
			t->next=q;
			f=1;
			break;
		}
	t=t->next;
	}
	if(f==0)
	{
		printf("The element not found..");
	}
}
int main()
{
	int ch,n,m,e,s;
	do
	{
		printf("\n1.at the beginning of a Singly Linked List\n2.At the end of the linked list\n3.after a specified element in a linked list\n4.display.\n5.exit.\nenter ur choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the element to be inserted : ");
				scanf("%d",&s);
				insert1(s);
				break;
			case 2:
				printf("enter the element to be inserted : ");
				scanf("%d",&n);
				insert2(n);
				break;
			case 3:
				printf("enter the element before the element that to be inserted : ");
				scanf("%d",&m);
				printf("enter the element to be inserted : ");
				scanf("%d",&e);
				insert3(m,e);
				break;
			case 4:
				disp();
				break;

		}
	}
	while(ch!=5);
return 0;
}
