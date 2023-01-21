//Write programs to demonstrate the usage of storage classes in C.
#include<stdio.h>
int a[10];
int n;
void readArray()
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter the value for a[%d]",i);
		scanf("%d",&a[i]);
	}
}
void dispArray()
{
	int i;
	for(i=0;i<n;i++)
	{
		static int k=5;
		k++;
		printf("%d\t",k);
	}
}

int main()
{
	register int i;
	printf("Enter the value for n:");
	scanf("%d",&n);
	readArray();
	dispArray();
	return 0;
}
