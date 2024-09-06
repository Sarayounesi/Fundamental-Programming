#include <stdio.h>

int main()
{
	int n , x , s;
	scanf("%d" , &n);
	 x=0 , s=n;
	for (int i = 1; i <= s ; i++)
	{
		x += i;
		if(x >= n)
		    break;	   
	} 
	printf("%d" , x);
	return (0);
}