//Use malloc to read n integers and find the mean.
#include<stdio.h>
#include<stdlib.h>
int main(){
	int *a,*c,sum=0,mean;
	int n,i;
	printf("Enter the value of n:");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("Enter a[%d]",i);
		scanf("%d",(a+i));
	}
	for(i=0;i<n;i++){
		printf("%d\t",*(a+i));
		}
		printf("\n");
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		mean=sum/n;		
	}	
	printf("The mean is %d\n",mean);
		
	free(a);
	return 0;
}

