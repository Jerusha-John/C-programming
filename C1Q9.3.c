/*Write a program with functions to delete a node
a.  From the beginning of the linked list
b.  From the end of the linked list
c.  The node with specified data element*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
typedef struct node node;
node *head=NULL;
void insert(int e)
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
		t=head;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=(node*)malloc(sizeof(node));
		t->next->data=e;
		t->next->next=NULL;
	}
}
void disp()
{
	node *t;
	t=head;
	if(head==NULL)
	{
		printf("empty list");
	}
	else
	{
		while(t!=NULL)
		{
			printf("%d\t",t->data);
			t=t->next;
		}
	}
}
void delete1()
{
	if(head==NULL)
	{
		printf("Empty list");
	}
	else
	{
		head=head->next;
	}
}
void delete2()
{
	node *t;
 	t = head;
 	while(t->next->next != NULL)
 	{
 		t= t->next;
 	}
 		t->next=t->next->next; 
}
void delete3(int e)
{
	node *t;
	int f=0;
	if(head==NULL)
	{
		printf("Empty list");
	}
	else
	{
		head=head->next;
	}
 	t = head;
 	while(t->next != NULL)
 	{
 		if(t->next->data == e)
 		{
  			t->next=t->next->next; 
 			f = 1;
 			break;
 		}
 	t= t->next;
 	}
}
int main()
{
	int ch,n,m,p,s;
	do
	{
		printf("\n1.insert.\n2.delete at beginning.\n3.delete from last.\n4.delete a specific element.\n5.display.\n6.exit\nenter ur choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the no to be inserted : ");
				scanf("%d",&n);
				insert(n);
				break;
			case 2:
				delete1();
				break;
			case 3:
				delete2();
				break;
			case 4:
				printf("enter the specific data element : ");
				scanf("%d",&p);
				delete3(p);
				break;
			case 5:
				disp();
				break;
			case 6:
				break;
		}
	}
	while(ch!=6);
	return 0;
}
