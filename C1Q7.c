//Display the array elements in the same order using a recursive function
#include<stdio.h>
int dispArray(int n,int j,int a[3])
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
 int i,j=-1,n=3;
 int a[3];
 for(i=0;i<3;i++)
 {
 printf("Enter the element:");
 scanf("%d",&a[i]);
 }
dispArray(n,j,a);
}


