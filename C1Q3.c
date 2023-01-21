//Use a menu driven program to insert, search, delete and sort elements in an array using functions (use only local variables)
#include<stdio.h>
#include<process.h>
#define size 5
void readArray(int a[size])
{
  int i;
  printf("\n Enter the %d elements:",size);
  for(i=0;i<size;i++)
  {
scanf("%d",&a[i]);
}

}
void dispArray(int a[size])
{
int i;
if(size==0)
{
printf("Array is Empty");
}
else
{
for(i=0;i<size;i++)
{
printf("%d\t",a[i]);
}
}

}
int searchArray(int a[size],int n)
{
int i,pos=-1;
dispArray(a);
for(i=0;i<size;i++)
{
if(a[i]==n)
{
printf("Elements found at %d",i);
pos=i;
return pos;
}
}
return pos;

}

void deleteArray(int a[size],int n)
{
int i,j;
for(i=0;i<size;i++)
{
if(a[i]==n)
{
for(j=i;j<size;j++)
{
a[j]=a[j+1];
}
}

}
for(i=0;i<size;i++)
{
printf("%d\t",a[i]);
}

}
void sortArray(int a[size])
{
int i,j,temp;
for(i=0;i<size-1;i++)
{
for(j=0;j<size-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\n Sorted Array");
for(i=0;i<size;i++)
{
printf("%d\t",a[i]);
}

}
int main()
{
int n,o,a[size];
do
{
printf("\n 1.Insertion \n 2.Search \n 3. Deletion \n 4. Sort\n Enter your choice:");
scanf("%d",&o);
switch(o)
{
case 1:
readArray(a);
break;
case 2:
printf("Enter the element to be searched:");
scanf("%d",&n);
searchArray(a,n);
break;
case 3:
   printf("Enter the element to be deleted:");
   scanf("%d",&n);
   deleteArray(a,n);
   break;
case 4:
sortArray(a);
break;
default:
exit(0);
}
}
while(1);
}

