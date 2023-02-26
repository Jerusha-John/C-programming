//Use calloc to read n numbers and find the mode.
#include<stdio.h>
#include<stdlib.h>
int main(){
	int *c,count;
	int n,i,j,mode,modeCount=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	c=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++){
		printf("Enter c[%d]",i);
		scanf("%d",(c+i));
	}
	for(i=0;i<n;i++){
		printf("%d\t",*(c+i));
		}
		printf("\n");
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			
			if(c[i]==c[j])
			{
				count++;
			}
			
		}
		if(count>modeCount)
		{
			modeCount=count;
			mode=c[i];
		}
	}
	printf("%d is the mode and the count is %d",mode,modeCount);
	
		return 0;
}
