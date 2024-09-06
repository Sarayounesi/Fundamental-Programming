#include<stdio.h>

int main()
{
	int n, i, j;
	
	scanf("%d", &n);
	
	int arr[n], arr2[n];
	int *p = arr;
	int *pr = arr2;
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", (p + i));
	}
	
	for(i = 0, j = n - 1; i < n; i++, j--)
	{
		*(pr + j) = *(p + i);
	}
	
	for(i = 0; i < n; i++)
	{
		printf("%d ", *(pr + i));
	}
	
	return 0;
}
