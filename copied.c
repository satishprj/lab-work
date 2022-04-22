#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i=0,j=0,m=0,n=0;
	printf("enter row and columns");
	scanf("%d %d",&m,&n);
	printf("enter original matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("element a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			b[i][j]=a[i][j];
		}
	}
	printf("copied value \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
