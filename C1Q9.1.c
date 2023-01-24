//Demonstrate a linked list creation and display
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node node;
node *head=NULL;
node *t=NULL;
void insert(int e)
{
	if(head==NULL)
	{
		head=(node*)malloc(sizeof(node));
		head->data=e;
		head->next=NULL;
	}
	else
	{
		
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
void display()
{
	t=head;
	if(t==NULL)
	{
		printf("List is empty\n");
		return;
	}
	while(t!=NULL)
	{
		printf("%d\t",t->data);
		t=t->next;
	}
	printf("\n\n");
}
int main()
{
	int ch,e;
	while(ch!=4){
	printf("1.Insert\n2.Display\n3.Exit\n Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter the element to be inserted:");
			scanf("%d",&e);
			insert(e);
			break;
		case 2:
			display();
			break;
		case 3:
			break;
	}
	}
	return 0;
}
