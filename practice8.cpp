#include<stdio.h>
#include<string.h>
struct emp
{
	int eno;
	int dno;
	char ename[50];
	float esal;
};
struct emp E[10];
int count=0;
void insert()
{
	printf("Enter eno,dno,ename,esal of the employee:");
	scanf("%d %d %s %.2f",&E[count].eno,&E[count].dno,&E[count].ename,&E[count].esal);
	count++;
}
void display()
{
	int i;
	for(i=0;i<count;i++)
	{
		printf("eno:%d\ndno:%d\nename:%s\nesal:%.2f\n",E[i].eno,E[i].dno,E[i].ename,E[i].esal);
	}
}
void search(int n)
{
	int i;
	for(i=0;i<count;i++)
	{
		if(E[i].eno==n)
		{
			printf("eno found");
			printf("eno:%d\ndno:%d\nename:%s\nesal:%.2f\n",E[i].eno,E[i].dno,E[i].ename,E[i].esal);
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
	printf("after sorting...");
	for(i=0;i<count;i++)
	{
		printf("eno:%d\ndno:%d\nename:%s\nesal:%.2f\n",E[i].eno,E[i].dno,E[i].ename,E[i].esal);	
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
	printf("after sorting...");
	for(i=0;i<count;i++)
	{
		printf("eno:%d\ndno:%d\nename:%s\nesal:%.2f\n",E[i].eno,E[i].dno,E[i].ename,E[i].esal);	
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
int main()
{
	int ch,n;
	switch(ch)
	{
		case 1:
			insert();
			break;
		case 2:
			printf("Enter the eno to be searched:");
			scanf("%d",&n);
			search(n);
			break;
		case 3:
			printf("Enter the eno to be deleted:");
			scanf("%d",&n);
			delete(n);
			break;
		case 4:
			sortbySalary();
			break;
		case 5:
			sortbyName();
			break;
		default:
			priintf("wrong choice:");
			break;	
	}
}
