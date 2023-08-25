#include<stdio.h>
int dispArray(int n,int j,int a[10])
{
	if(j==n-1)
	{
		return 0;
	}
	else
	{
		j=j+1;
		printf("%d\t",a[j]);
		return dispArray(n,j,a);
	}
}
int main()
{
	int i,j=-1;
	int n,a[10];
	printf("Enter the size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	dispArray(n,j,a);
	return 0;
}

