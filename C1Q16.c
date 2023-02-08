//Add two polynomials - using array itself 
#include<stdio.h>
#define size 10
int poly1[size],poly2[size],poly3[size];
int main()
{
	int i;
	int n1,n2;
	printf("enter the no. of terms of polynomial 1 : ");
	scanf("%d",&n1);
	for(i=n1-1;i>=0;i--)
	{	
		printf("enter the coefficient of x^%d : ",i);
		scanf("%d",&poly1[i]);
	}
	for(i=n1-1;i>0;i--)
	{
  		printf("%dx^%d",poly1[i],i);
  		printf("%s",poly1[i-1] >= 0? " + ":" ");
	}
	if(i == 0)
	{
  		printf("%d",poly1[i]);
  	}
 	printf("\nenter the no. of terms of polynomial 2 : ");
	scanf("%d",&n2);
	for(i=n2-1;i>=0;i--)
	{
		printf("enter the coefficient of x^%d : ",i);
		scanf("%d",&poly2[i]);
	}
	for(i=n2-1;i>0;i--)
	{
  		printf("%dx^%d",poly2[i],i);
  		printf("%s",poly2[i-1] >= 0? " + ":" ");
	}
	if(i == 0)
	{
  		printf("%d",poly2[i]);
 	}
  	printf("\n\naddition of two polynomial\n");
  	if(n1>n2)
	{
  		for(i=n1-1;i>=0;i--)
  		{
  			poly3[i]=poly1[i]+poly2[i];
		}
		for(i=n1-1;i>0;i--)
		{
  			printf("%dx^%d",poly3[i],i);
  			printf("%s",poly3[i-1] >= 0? " + ":" ");
		}
		if(i == 0)
		{
	  	printf("%d",poly3[i]);
  		}
	}
	else
	{
		for(i=n2-1;i>=0;i--)
  		{
  		poly3[i]=poly1[i]+poly2[i];
		}
		for(i=n2-1;i>0;i--)
		{
  		printf("%dx^%d",poly3[i],i);
  		printf("%s",poly3[i-1] >= 0? " + ":" ");
		}
	if(i == 0)
		{
  		printf("%d",poly3[i]);
  		}
	}
 
}
