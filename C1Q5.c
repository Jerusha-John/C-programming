//Sort the array elements in ascending order (minimum three functions - read, disp and sort)
#include<stdio.h>
void read(int a[],int n)
{
	int i;
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);	
	}
}
void sort(int a[],int n)
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
}
void disp(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void main()
{
	int a[5],n;
	printf("enter the size:");
	scanf("%d",&n);
	read(a,n);
	sort(a,n);
	disp(a,n);
}
