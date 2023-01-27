/*Sort the elements in a linked list using
	Changing the address (Swapping the address)*/
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node * head = NULL;
void insert(int e){
    struct node * t;
    if(head==NULL){
        head=(struct node *)malloc(sizeof(struct node));
        head->data=e;
        head->next=NULL;
    }
    else{
        t=head;
        while(t->next!=NULL){
            t=t->next;
        }
        t->next=(struct node*)malloc(sizeof(struct node));
        t->next->data=e;
        t->next->next=NULL;
    }
}
void display() {  
    struct node *new_node = head;  
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    while(new_node != NULL) {  
        printf("%d ", new_node->data);  
        new_node = new_node->next;  
    }  
    printf("\n");  
}  

void sortList() {  
        //Node current will point to head  
        struct node *current = head, *index = NULL;  
        int temp;  
          
        if(head == NULL) {  
            return;  
        }  
        else {  
            while(current != NULL) {  
                //Node index will point to node next to current  
                index = current->next;  
                  
                while(index != NULL) {  
                    //If current node's data is greater than index's node data, swap the data between them  
                    if(current->data > index->data) {  
                        temp = current->data;  
                        current->data = index->data;  
                        index->data = temp;  
                    }  
                    index = index->next;  
                }  
                current = current->next;  
            }      
        } 
    display(); 
    }  
int main(){
    int ch, e;
    while (1) {
        printf("\n1. Insert\n2. Display\n3. Sort\n4. Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch) {
        case 1:
            printf("\nEnter the value to insert: ");
            scanf("%d", &e);
            insert(e);
            break;
        case 2:
            display();
            break;
        case 3:
            sortList();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nWrong Choice\n");
        }
    }
}
