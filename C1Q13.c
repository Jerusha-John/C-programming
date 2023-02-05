//Define a structure for date having dd/mm/yyyy. Provide functions for reading, displaying and comparing two dates are equal or not 
#include<stdio.h>
struct date
{
	int dd;
	int mm;
	int yyyy;
}d1,d2;
void read()
{
	printf("Enter the first date:\n");
	printf("Enter dd:");
	scanf("%d",&d1.dd);
	printf("Enter mm:");
	scanf("%d",&d1.mm);
	printf("Enter yyyy:");
	scanf("%d",&d1.yyyy);
	printf("Enter the second date:\n");
	printf("Enter dd:");
	scanf("%d",&d2.dd);
	printf("Enter mm:");
	scanf("%d",&d2.mm);
	printf("Enter yyyy:");
	scanf("%d",&d2.yyyy);
}
void disp()
{
	printf("\nThe first date is %d/%d/%d",d1.dd,d1.mm,d1.yyyy);
	printf("\nThe second date is %d/%d/%d",d2.dd,d2.mm,d2.yyyy);
}

void comp()
{
	if(d1.dd==d2.dd&&d1.mm==d2.mm&&d1.yyyy==d2.yyyy)
	{
		printf("\nThe Dates are Equal");
	}
	else
	{
		printf("\nThe Dates are Unequal");
	}
}
void main()
{
	read();
	disp();
	comp();	
}
