#include<stdio.h>
int main()
{

	int m;
	
	printf("Enter the row of frist matrix :");
	
	scanf("%d",&m);
	
	int n;
	
	printf("Enter the no column of frist matrix :");
	
	scanf("%d",&n);
	
	int a[m][n];
	
	printf("\nEnter the element of 1st matrix:");
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(int i=0;i<m;i++)
	{
		if(i%2==0)
		{
	
			for(int j=0;j<n;j++)
			{
			printf("%d ",a[i][j]);
			}
			
		}
		
		else
		{
	
			for(int j=n-1;j>=0;j--)
			{
				printf("%d ",a[i][j]);
			
		         }
		         
		}
		printf("\n");
		
	  }
	
return 0;
		
}
			
	
