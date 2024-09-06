#include <stdio.h>

int main()
{
    
	int a , unc;
    int javab = 0;
    int j , i;
    scanf("%d %d" , &a , &unc);
    char arr[a][unc];
    for (i = 0; i < a; i++)
	{
		for ( j = 0; j < unc+ 1; j++)
		{
			scanf("%c" , &arr[i][j]);
		
		
			if (arr[i][j] == '*')
			javab++;
		}
	}
  
    printf("%d" , javab);

 return (0);
}