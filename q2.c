#include<stdio.h>
#include<conio.h>

void main()
{
	//wap to find the sum of 2d array.
	int r,c,i,j,sum=0;
	
	printf("Enter r: ");
	scanf("%d",&r);
	
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
			sum= sum + a[i][j];
		}
	}
	printf("Sum of elements of 2d array is: %d",sum);
}
