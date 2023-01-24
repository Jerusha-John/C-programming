//Display array elements in the reverse order using a recursive function
#include<stdio.h>
int dispArray(int n,int a[3])
{
	if(n==0)
	{
	return 0;
	}
	else
	{
	n=n-1;
	printf("%d\t",a[n]);
	return dispArray(n,a);
	}
}
int main()
	{
	int n=3,i;
	int a[3];
	for(i=0;i<3;i++)
	{
	printf("Enter the element:");
	scanf("%d",&a[i]);
	}
dispArray(n,a);
}
