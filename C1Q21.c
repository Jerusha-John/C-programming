//Implement a) malloc , b) calloc and c) free functions
#include<stdio.h>
#include<stdlib.h>
int main(){
	int *a,*c;
	int n,i;
	printf("Enter the value of n:");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	c=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++){
		printf("Enter a[%d]",i);
		scanf("%d",(a+i));
	}
	for(i=0;i<n;i++){
		printf("%d\t",*(a+i));
		}
	printf("\n");
	for(i=0;i<n;i++){
		printf("Enter c[%d]",i);
		scanf("%d",(c+i));
	}
	for(i=0;i<n;i++){
		printf("%d\t",*(c+i));
		}	
		
	free(a);
	free(c);
	return 0;
}
