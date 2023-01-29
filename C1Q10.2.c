//Linked list using names - insert, delete, display, sort, reverse, count
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
	char name[100];
	struct node *next;
};
typedef struct node node;
node *head=NULL;
void insert(char name[])
{
 if(head == NULL) 
 {
 head = (node *)malloc(sizeof(node)); 
 strcpy(head->name,name);  
 head->next = NULL; 
 }
 else 
 {
 node *t = head;
 while(t->next != NULL)
 {
 t = t->next;
 }
 t->next = (node *)malloc(sizeof(node)); 
 strcpy(t->next->name,name); 
 t->next->next = NULL; 
 }
}

void delete(char name[])
{
	node *t;
	if(head==NULL)
	{
		printf("\nlist is empty\n");
	}
	else if(strcmp(head->name,name)==0)
	{
		head=head->next;
	}
	else
	{
		t=head;
		while(t->next!=NULL)
		{
			if(strcmp(t->next->name,name)==0)
			{
			t->next=t->next->next;
			return;
			}
			t=t->next;
		}
		printf("\nnot found\n");
	}
}
void count()
{
 node *t;
 int count=0;
 if(head == NULL)
 {
 printf("\nList is Empty\n");
 return;
 }
 t= head;
 while (t != NULL)
 {
 count++;
 t = t->next;
 }
  printf("\ncount=%d\n",count);
}

void sort()
{
	node *curr,*pre;
	char t[100];
 if(head == NULL)
 {
 printf("\nList is Empty\n");
 return;
 }
 else
 {
 	pre=head;
 	while(pre!=NULL)
 	{
 		curr=pre->next;
 		while(curr!=NULL)
 		{
 			if(strcmp(pre->name,curr->name)==1)
 			{
 				strcpy(t,pre->name);
 				strcpy(pre->name,curr->name);
 				strcpy(curr->name,t);
			 }
			 curr=curr->next;
		 }
		 pre=pre->next;
	 }
 }
}

void reverse()
{
	node *curr,*pre;
	  if(head != NULL)
    {
        pre = head;
        curr= head->next;
        head = head->next;

        pre->next = NULL; 

        while(head != NULL)
        {
            head = head->next;
            curr->next = pre;

            pre = curr;
            curr = head;
        }

        head = pre;
	}
}
void disp()
{
 node *t;
 
 if(head == NULL)
 {
 printf("\nList is Empty\n");
 return;
 }
 else{
 t= head;
 printf("\n");
 while (t != NULL)
 {
 printf("%s\t",t->name);
 t = t->next;
 }
  printf("\n");

}
}
int main()
{
	int ch;
	char name[100];
	do
	{
		printf("\n1.insert\n2.delete\n3.reverse\n4.sort\n5.diplay\n6.count\n7.quit\n\nenter ur choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				fflush(stdin);
				printf("\nenter the name : ");
				gets(name);
				insert(name);
				break;
				case 2:
					fflush(stdin);
				printf("\nenter the name : ");
				gets(name);
				delete(name);
				break;
				case 3:
					reverse();
					break;
				case 4:
					sort();
					break;
				case 5:
					disp();
					break;
				case 6:
					count();
					break;
				case 7:
					break;
				default :
					printf("\nwrong choice..\n");
					break;
		}
	}while(ch!=7);
}
