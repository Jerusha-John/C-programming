//Read a polynomial and display - use array 
#include<stdio.h>
#define size 5
void main()
{
	int coef[size];
	int exp[size];
	int n,i;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the coefficient and exponent:");
		scanf("%d %d",&coef[i],&exp[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(exp[i]==0)
		{
		printf("%d",coef[i]);
		printf("%s",coef[i+1]>0?"+":" ");
		}
		else
		{
		printf("%dx^%d",coef[i],exp[i]);
		printf("%s",coef[i+1]>0?"+":" ");
		}
	
	}
	if(exp[i]==0)
		{
		printf("%d",coef[i]);
		printf("%s",coef[i+1]>0?"+":" ");
		}
	else
		printf("%dx^%d",coef[i],exp[i]);
	
}

