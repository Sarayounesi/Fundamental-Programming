#include <stdio.h>

int main()
{
	int n, i, x, y;
	
	scanf("%d", &n);
	
	long long int t[n];
	
	for(i = 0; i < n; i++)
	{
		scanf("%d%d", &x, &y);
		
		if(x == y)
		{
			if(x % 2 == 0)
				t[i] = 2 * x;
			
			else
				t[i] = 2 * x - 1;
		}
		
		else if(x == y + 2)
		{
			if(x % 2 == 0)
				t[i] = 2 * y + 2;
				
			else
				t[i] = 2 * y + 1;
		}
		
		else
		{
			t[i] = -1;
		}
	}
	
	for(i = 0; i < n; i++)
	{
		printf("%lld\n", t[i]);
	}
	
	return 0;
}
