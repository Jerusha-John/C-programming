#include<stdio.h>
int dispArray(int n,int a[10])
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
	int i,n,a[10];
	printf("Enter the size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	dispArray(n,a);
	return 0;
}
