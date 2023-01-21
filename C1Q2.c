//Use a menu driven program to insert, search, delete and sort elements in an array using functions (use global variables)
#include<stdio.h>
#include<process.h>
int a[10],size=0;
void dispArray()
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
void readArray()
{
  int i;
  printf("Enter the size");
  scanf("%d",&size);
  printf("\n Enter %d elements:",size);
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
  dispArray();
}
int searchArray(int n)
{
  int i;
  dispArray();
  for(i=0;i<size;i++)
   {
     if(a[i]==n)
      {
         printf("Element found at %d",i+1);
      }
   }
}
void deleteArray(int n) 
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
       size--;
      }
}
dispArray();

}

void sortArray()
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
     printf("\n sortedArray");
     for(i=0;i<size;i++)
        {
           printf("%d\t",a[i]);
        }
}

int main()
{
int ch,n;
do
{
 printf("\n 1.Insertion \n 2.Search \n 3.Deletion \n 4.Sort \n Enter your choice:");
 scanf("%d",&ch);
	switch(ch)
	{
 		case 1:
  			readArray();
  			break;
		case 2:
			printf("Enter the element to be searched:");
			scanf("%d",&n);
 			searchArray(n);
			break;
		case 3:
			printf("Enter the element to be deleted:");
			scanf("%d",&n);
			deleteArray(n);
			break;
		case 4:
			sortArray();
			break;
		default:
			exit(0);
	}
}  
     while(1);  
}


