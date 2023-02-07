/*Define a structure for employees having eno,ename, esal and dno. Read  n employees information and provide function for the following  Oct 1, 2022
	Searching an employee by no
	Sorting the employee by
	Name
	Salary
	Deleting an employee*/

#include<stdio.h>
struct emp{
	int eno;
	int dno;
	char ename[50];
	float esal;
};
struct emp E[10];
int count=0;
void insert()
{
	printf("Enter the eno,dno,ename,esal:");
	scanf("%d %d %s %f",&E[count].eno,&E[count].dno,&E[count].ename,&E[count].esal);
	count++;
}
void display()
{
	int i;
	for(i=0;i<count;i++)
	{
		printf("eno:%d\t dno:%d\t ename:%s\t esal:%.2f\t\n ",E[i].eno,E[i].dno,E[i].ename,E[i].esal);
	}
}
void search(int n)
{
	int i;
	for(i=0;i<count;i++)
	{
		if(n==E[i].eno)
		{
			printf("eno found..\n");
			printf("eno:%d\t dno:%d\t ename:%s\t esal:%.2f\t\n ",E[i].eno,E[i].dno,E[i].ename,E[i].esal);
			return;	
		}
	}
}
void sortbyName()
{
	int i,j;
	struct emp temp;
	for(i=0;i<count;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(strcmp(E[i].ename,E[j].ename)==1)
			{			
				temp=E[i];
				E[i]=E[j];
				E[j]=temp;
			}
		}
	}
	printf("After sorting...\n");
	for(i=0;i<count;i++)
	{
		printf("eno:%d\t dno:%d\t ename:%s\t esal:%.2f\t\n ",E[i].eno,E[i].dno,E[i].ename,E[i].esal);
	}	
} 
void sortbySalary()
{
	int i,j;
	struct emp temp;
	for(i=0;i<count;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(E[i].esal>E[j].esal)
			{			
				temp=E[i];
				E[i]=E[j];
				E[j]=temp;
			}
		}
	}
	printf("After sorting...\n");
	for(i=0;i<count;i++)
	{
		printf("eno:%d\t dno:%d\t ename:%s\t esal:%.2f\t\n ",E[i].eno,E[i].dno,E[i].ename,E[i].esal);
	}
}
void delete(int n)
{
	int i,j;
	for(i=0;i<count;i++)
	{
		if(E[i].eno==n)
		{
			for(j=1;j<count;j++)
			{
				E[j]=E[j+1];
			}
			count--;
		}
	}
	display();
}

int menu()
{
	int ch;
	printf("1.Insert\n2.Display\n3.Search\n4.SortbySalary\n5.SortbyName\n6.Delete\n7.Exit\n Enter your choice:");
	scanf("%d",&ch);
	getchar();
	return ch;
}


void main()
{
	int ch,n;
	for(ch=menu();ch!=7;ch=menu())
	{
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
			case 3:
				printf("Enter the eno to be searched:");
				scanf("%d",&n);
				search(n);
				break;
			case 4:
				sortbySalary();
				break;
			case 5:
				sortbyName();
				break;
			case 6:
				printf("Enter the position of the employee to be deleted:");
				scanf("%d",&n);
				delete(n);
				break;
			case 7:
			  	break;
			default:
			  	printf("Wrong choice");
				  break;			
		}
	}
}

