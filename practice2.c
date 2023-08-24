#include<stdio.h>
void readArray(int a[],int n)
{
	int i;
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void dispArray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void sortArray(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{	
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}	
		}
	}
	printf("\nsorted array:\n");
	dispArray(a,n);
}
int main()
{
	int a[10],n;
	printf("enter the size:");
	scanf("%d",&n);
	readArray(a,n);
	dispArray(a,n);
	sortArray(a,n);
}
