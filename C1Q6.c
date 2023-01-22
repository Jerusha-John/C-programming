//Two Dimensional Matrix - using functions 
//    Addition
//    Subtraction
//    Multiplication
//    Transpose   
//    Determinant

#include<stdio.h>
int m1[10][10],m2[10][10],d[10][10];
int i,j,k;
void AddArray(int r,int c)
{
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("Enter element for m1[%d][%d]",i,j);
		scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("Enter element for m2[%d][%d]",i,j);
		scanf("%d",&m2[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(r==c)
			{
			d[i][j]=m1[i][j]+m2[i][j];
		    printf("%d\t",d[i][j]);
		    }
   		}
	printf("\n");
	}
	if(r!=c)
		    {
		    	printf("Addition not possible");
			}
}
void SubArray(int r,int c)
{
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("Enter element for m1[%d][%d]",i,j);
		scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("Enter element for m2[%d][%d]",i,j);
		scanf("%d",&m2[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(r==c)
			{
				d[i][j]=m1[i][j]-m2[i][j];
				printf("%d\t",d[i][j]);
   			}
		}
		printf("\n");
	}
		if(r!=c)
		    {
		    	printf("Subtraction not possible");
			}
}
void ProductArray(int r,int c)
{
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("Enter element for m1[%d][%d]",i,j);
		scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("Enter element for m2[%d][%d]",i,j);
		scanf("%d",&m2[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		d[i][j]=0;
		for(k=0;k<r;k++)
		{
			d[i][j]=d[i][j]+m1[i][k]*m2[k][j];
		}
		printf("%d\t",d[i][j]);
   		}
   printf("\n");	
	}
}
void TransposeArray(int r,int c)
{
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("Enter element for m1[%d][%d]",i,j);
		scanf("%d",&m1[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		m2[i][j]=m1[j][i];
		printf("%d\t",m2[i][j]);
   		}
   		printf("\n");
	}
}
void DetArray(int r,int c)
{
	int det;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("Enter element for m1[%d][%d]",i,j);
		scanf("%d",&m1[i][j]);
		}
	}
	if(r==2)
	{
		det=(m1[0][0]*m1[1][1])-(m1[0][1]*m1[1][0]);
	}
	else if(r==3)
	{
		det=m1[0][0]*((m1[1][1]*m1[2][2])-(m1[2][1]*m1[1][2]))-m1[0][1]*((m1[1][0]*m1[2][2])-(m1[1][2]*m1[2][0]))+m1[0][2]*((m1[1][0]*m1[2][1])-(m1[2][0]*m1[1][1]));
	}
	else
	{
		printf("Det not possible");
	}
	printf("Det=%d",det);
}

int main()
{
int r,c,ch;
do
	{
	printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Transpose\n5.Determinant\n Enter the choice:\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		printf("Enter the size of row:");
		scanf("%d",&r);
		printf("Enter the size of column:");
		scanf("%d",&c);	
		AddArray(r,c);
		break;

   	case 2:
	   	printf("Enter the size of row:");
		scanf("%d",&r);
		printf("Enter the size of column:");
		scanf("%d",&c);
		SubArray(r,c);
		break;
	case 3:
   		printf("Enter the size of row:");
		scanf("%d",&r);
		printf("Enter the size of column:");
		scanf("%d",&c);
		ProductArray(r,c);
		break;
	case 4:
		printf("Enter the size of row:");
		scanf("%d",&r);
		printf("Enter the size of column:");
		scanf("%d",&c);
		TransposeArray(r,c);
		break;
    case 5:
		printf("Enter the size of row:");
		scanf("%d",&r);
		printf("Enter the size of column:");
		scanf("%d",&c);
		DetArray(r,c);
		break;

	}
	}

while(1);
	{
	return 0;
	}
}
