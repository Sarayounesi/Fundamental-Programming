#include <stdio.h>

int counter(char array[7][7], int i, int j)
{
	int t = 0;
	
	if(i == 0 || i == 1)
	{
		if(array[i+2][j] == '.' && array[i+1][j] != '.')
			t++;
		
		if(array[i][j-2] == '.' && array[i][j-1] != '.')
			t++;
			
		if(array[i][j+2] == '.' && array[i][j+1] != '.')
			t++;
			
		return t;
	}
			
	if(i == 5 || i == 6)
	{
		if(array[i-2][j] == '.' && array[i-1][j] != '.')
			t++;
		
		if(array[i][j-2] == '.' && array[i][j-1] != '.')
			t++;
			
		if(array[i][j+2] == '.' && array[i][j+1] != '.')
			t++;
		
		return t;
	}
			
	if(j == 0 || j == 1)
	{
		if(array[i-2][j] == '.' && array[i-1][j] != '.')
			t++;
		
		if(array[i+2][j] == '.' && array[i+1][j] != '.')
			t++;
			
		if(array[i][j+2] == '.' && array[i][j+1] != '.')
			t++;
			
		return t;
	}
	
	if(j == 5 || j == 6)
	{
		if(array[i-2][j] == '.' && array[i-1][j] != '.')
			t++;
		
		if(array[i+2][j] == '.' && array[i+1][j] != '.')
			t++;
			
		if(array[i][j-2] == '.' && array[i][j-1] != '.')
			t++;
		
		return t;
	}
	
	else
	{
		if(array[i-2][j] == '.' && array[i-1][j] != '.')
			t++;
		
		if(array[i+2][j] == '.' && array[i+1][j] != '.')
			t++;
			
		if(array[i][j-2] == '.' && array[i][j-1] != '.')
			t++;
		
		if(array[i][j+2] == '.' && array[i][j+1] != '.')
			t++;
		
		return t;
	}
}

int main()
{
	char array[7][7];
	int i, j, t = 0;
	
	for(i = 0; i < 7; i++)
	{
		for(j = 0; j < 7; j++)
			scanf("%c", &array[i][j]);
			
		getchar();
	}
	
	for(i = 0; i < 7; i++)
	{
		for(j = 0; j < 7; j++)
		{
			if(array[i][j] == 'o')
				t = t + counter(array, i, j);
		}
	}
	
	printf("%d", t);
	
	return 0;
}
