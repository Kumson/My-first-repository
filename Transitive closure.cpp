 #include<stdio.h>
int main()
{
	int n,k,flag;
	printf("Enter n:\n");
	scanf("%d",&n);
	printf("//The first element of the matrix is a11\n");
	
	int matrix[n][n];
	int i,j;
	for(i = 1; i <= n; i ++)
	
	
	{
		for(j = 1; j <= n; j ++)
			matrix[i][j] = 0;
	}
	
	int elements;
	printf("Enter the number of elements in R\n");
	scanf("%d",&elements);
	printf("Enter the elements:\n");
	for (k = 0; k < elements; k ++)
	{
		scanf("%d%d",&i,&j);
		matrix[i][j] = 1;
	}
	
	printf("R:\n");
	for(i = 1; i <= n; i ++)
	{
		for(j = 1; j <= n; j ++)
			printf("%d ",matrix[i][j]);
		printf("\n");	
	}
	
	for (k = 1; k <= n; k ++)
	{
		for(i = 1; i <= n; i ++)
		{
			for(j = 1; j <= n; j ++)
			{
				if (matrix[i][j] == 0)
					if (matrix[i][k] == 1 && matrix[k][j] == 1)
						matrix[i][j] = 1;
			}
		}
	}
	
	printf("\nR*:\n");
	for(i = 1; i <= n; i ++)
	{
		for(j = 1; j <= n; j ++)
			printf("%d ",matrix[i][j]);
		printf("\n");	
	}
	
	return 0;
}
