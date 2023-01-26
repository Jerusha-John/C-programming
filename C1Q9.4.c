//Write a program to create a singly linked list of n nodes and display it in reverse order.
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node node;
node *head=NULL;
void insert(int n)
{
	int i,m,s;
	node *t;
	if(head==NULL)
	{
		head=(node *)malloc(sizeof(node));
		printf("enter the no to be inserted : ");
		scanf("%d",&m);
		head->data=m;
		head->next=NULL;	
	}
		t=head;
		for(i=1;i<n;i++){
		while(t->next!=NULL)
		{
				t=t->next;
		}
		printf("enter the no to be inserted : ");
		scanf("%d",&s);
			t->next=(node*)malloc(sizeof(node));
			t->next->data=s;
			t->next->next=NULL;
		}
	
}

void disp()
{
	node *t;
	if(head==NULL)
	{
		printf("\nList is empty\n");
	}
	else{
		t=head;
		while(t!=NULL)
		{
			printf("%d\t",t->data);
			t=t->next;
		}
	}
}
void reverse()
{
	node *curr,*pre;
	if(head!=NULL)
	{
		pre=head;
		curr=head->next;
		head=head->next;
		pre->next=NULL;
	}
	while(head!=NULL)
	{
		head=head->next;
		curr->next=pre;
		pre=curr;
		curr=head;
	}
	head=pre;
}
int main()
{
	int n;
	printf("enter the no. of nodes: ");
	scanf("%d",&n);
	insert(n);
	disp();
	printf("\n");
	reverse();
	disp();
	return 0;
}
