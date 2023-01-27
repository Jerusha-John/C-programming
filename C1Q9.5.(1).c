/*Sort the elements in a linked list using
	changing the values (swapping the values)*/

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node *head = NULL;
void ins(int n)
{
    if(head == NULL)
    {
        head = (node*)malloc(sizeof(node));
        head->data = n;
        head->next = NULL;
    }
    else
    {
        node *t = head;
        while(t->next != NULL)
            t = t->next;
        t->next = (node*)malloc(sizeof(node));
        t->next->data = n;
        t->next->next = NULL;
    }
}
void disp()
{
    if(head == NULL)
        printf("\nLinked list empty.\n");
    else
    {
        printf("\nThe elements in the list are ");
        node *t = head;
        while(t != NULL)
        {
            printf("%d  ",t->data);
            t=t->next;
        }
    }
}
void sort()
{
    node *i = head;
    node *t1 = head;
    while(i->next != NULL)
    {
        node *t2 = i;
        node *j = i->next;
        while(j != NULL)
        {
            if(i->data > j->data)
            {
                t2->next = j->next;
                if(head == i)
                    t1 = head = j;
                else
                    t1->next = j;
                j->next = i;
                i = t1;
            }
            else
                t2 = j;
            j = j->next;
        }
        t1 = i;
        i = i->next;
    }
}
int main()
{
    int c,num;
    do{
        printf("\n1.Insert\n2.Display\n3.sorted order\n4.Exit.");
        printf("\nEnter your choice: ");    
        scanf("%d",&c);
        switch(c)
        {
            case 1: 
				printf("enter the element: "); 
                scanf("%d",&num);
                ins(num);
                break;
            case 2: 
				disp();
                break;
            case 3: 
				sort();
                disp();
                break;
            case 4:
				exit(0);
                break;
            default: 
				printf("\nWrong choice... Choose again.\n");
        }
    }while(c!=6);
    return 0;
}
