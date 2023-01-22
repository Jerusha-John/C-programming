//Search for all the occurrence of an element in an integer array (positions)
#include<stdio.h>
void searchArray()
{
	int a[5],i,n,count=0;
	for(i=0;i<5;i++)
	{
		printf("Enter the number:");
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched:");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		if(a[i]==n)
		{
			printf("Element found at %d position\n",i+1);
			count++;
		}
	}
	if(count==0)
	{
		printf("Element is not found");
	}
    printf("The number of times the elemnt occurs is %d",count);
}
void main()
{
	searchArray();
}
