//Linked Queue
#include<stdio.h>
#include<stdlib.h>
struct queue{
	int data;
	struct queue *next;
};
typedef struct queue queue;
queue *f=NULL,*r=NULL;
void display()
{
	queue *t;
	if(f==NULL)
	{
		printf("Empty queue\n");
	}
	else
	{
		t=f;
		printf("\n");
		while(t!=NULL)
		{
			printf("%d\t",t->data);
			t=t->next;
		}
		printf("\n");
	}
}
void enqueue(int e)
{
	queue *t;
	t=(queue *)malloc(sizeof(queue));
	t->data=e;
	t->next=NULL;
	if(f==NULL)
	{
		f=t;
		r=t;
	}
	else
	{
		r->next=t;
		r=r->next;
	}
}
void dequeue()
{
	if(f==NULL)
	{
		printf("Empty queue\n");
	}
	else
	{
		printf("%d\n",f->data);
		f=f->next;
		if(f==NULL)
		{
			r=NULL;
		}
	}
}
int main()
{
	int ch,e;
	while(ch!=4)
	{
		printf("1.enqueue\n2.dequeue\n3.display\n4.exit\n Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the element to be inserted:");
				scanf("%d",&e);
				enqueue(e);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
		}
	}
	return 0;	
}
