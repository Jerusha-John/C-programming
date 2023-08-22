#include<stdio.h>
void searchArray()
{
	int a[10],i,n,count=0;
	printf("Enter the size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(a[i]==n)
		{
			printf("Elememt found at %d position\n",i);
			count++;
		}
	}

	if(count==0)
	{
		printf("Element not found");
	}
	printf("Number of times the element is found is %d",count);
}
int main()
{
	
	searchArray();
	return 0;
}
