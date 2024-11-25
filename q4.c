#include<stdio.h>
#include<conio.h>

void main()
{
	//largest of 2d array.
	int r,c,i,j,max;
	
	//enter row
	printf("Enter r: ");
	scanf("%d",&r);
	
	//enter column
	printf("Enter c: ");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
		for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
			}
		}
		printf("\n");
	}
			printf("largest num is %d",max);
}
