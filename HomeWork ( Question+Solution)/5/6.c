#include<stdio.h>

int main()
{
	int n, i, j;
	int **m1, **m2, **res;
	
	scanf("%d", &n);
	
	m1 = (int **)calloc(n, sizeof(int *)); 
	m2 = (int **)calloc(n, sizeof(int *));
	res = (int **)calloc(n, sizeof(int *));
	
	for(i = 0; i < n; i++)
	{
		*(m1 + i) = (int *)calloc(n, sizeof(int));
		*(m2 + i) = (int *)calloc(n, sizeof(int));
		*(res + i) = (int *)calloc(n, sizeof(int));
	}
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", (*(m1 + i) + j));
		}
	}
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", (*(m2 + i) + j));
		}
	}

	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			*(*(res + i) + j) = *(*(m1 + i) + j) + *(*(m2 + i) + j);
		}
	}
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d ", *(*(res + i) + j));
		}
		printf("\n");
	}
	
	for(i = 0; i < n; i++)
	{
		free(m1[i]);
		free(m2[i]);
		free(res[i]);
	}
	free(m1);
	free(m2);
	free(res);  
	
	return 0;
}
