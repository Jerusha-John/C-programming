//Multiply two polynomials 
#include<stdio.h>
struct term
{
	int coe;
	int exp;
};
typedef struct term poly;
poly p1[10],p2[10],p3[10];
int main()
{
	int n,m,i,j,k,t;
	printf("enter the no of term of the polynomial 1: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the coe(%d) : ",i+1);
		scanf("%d",&p1[i].coe);
		printf("enter the exp(%d) : ",i+1);
		scanf("%d",&p1[i].exp);		
	}
for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p1[i].exp<p1[j].exp)
			{
				t=p1[i].exp;
				p1[i].exp=p1[j].exp;
				p1[j].exp=t;
				t=p1[i].coe;
				p1[i].coe=p1[j].coe;
				p1[j].coe=t;
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		if(p1[i+1].coe>=0){
		printf("%dx^%d + ",p1[i].coe,p1[i].exp);	
	}
	 else{
		printf(" %dx^%d ",p1[i].coe,p1[i].exp);
	}
	}
	if(p1[n-1].exp==0)
	{
		printf("%d",p1[n-1].coe);
	}
	else{
	printf("%dx^%d",p1[n-1].coe,p1[n-1].exp);
	}
	printf("\n\nenter the no of term of the polynomial 2: ");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		printf("enter the coe(%d) : ",i+1);
		scanf("%d",&p2[i].coe);
		printf("enter the exp(%d) : ",i+1);
		scanf("%d",&p2[i].exp);		
	}



for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(p2[i].exp<p2[j].exp)
			{
				t=p2[i].exp;
				p2[i].exp=p2[j].exp;
				p2[j].exp=t;
				t=p2[i].coe;
				p2[i].coe=p2[j].coe;
				p2[j].coe=t;
			}
		}
	}
	for(i=0;i<m-1;i++)
	{
		if(p2[i+1].coe>=0){
		printf("%dx^%d + ",p2[i].coe,p2[i].exp);	
	}
	 else{
		printf(" %dx^%d ",p2[i].coe,p2[i].exp);
	}
	}
	if(p2[m-1].exp==0)
	{
		printf("%d",p2[m-1].coe);
	}
	else{
	printf("%dx^%d",p2[m-1].coe,p2[m-1].exp);
	}
	printf("\nmultiplication\n");
	k=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			p3[k].coe=p1[i].coe*p2[j].coe;
			p3[k].exp=p1[i].exp+p2[j].exp;
			k++;
		}
	}
	
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(p3[i].exp==p3[j].exp)
			{
				p3[i].coe=p3[i].coe+p3[j].coe;
				p3[i].exp=p3[i].exp;
				for(j=j;j<k;j++){
				p3[j].coe=p3[j+1].coe;
				p3[j].exp=p3[j+1].exp;
			}
				k--;
			}
		}
	}
	
	printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(p2[i].exp<p2[j].exp)
			{
				t=p2[i].exp;
				p2[i].exp=p2[j].exp;
				p2[j].exp=t;
				t=p2[i].coe;
				p2[i].coe=p2[j].coe;
				p2[j].coe=t;
			}
		}
	}
	for(i=0;i<k-1;i++)
	{
		if(p3[i+1].coe>=0){
		printf("%dx^%d + ",p3[i].coe,p3[i].exp);
	}
	else{
		printf(" %dx^%d ",p3[i].coe,p3[i].exp);
	}
	}
	if(p3[k-1].exp==0){
		printf("%d",p3[k-1].coe);
	}
	else{
	printf(" %dx^%d ",p3[k-1].coe,p3[k-1].exp);
	}
	return 0;
}
