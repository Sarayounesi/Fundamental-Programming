#include<stdio.h>

typedef struct
{
	int r;
	int i;
}
complex;

int main()
{
	int n, m, s, t, i;
	char c;
	
	scanf("%d %d", &n, &m);
	
	complex number[n], ans[m];
	
	for(i = 0; i < n; i++)
	{
		scanf("%d %d", &number[i].r, &number[i].i);
	}
	
	for(i = 0; i < m; i++)
	{
		scanf("%d %c %d", &s, &c, &t);
		
		s--;
		t--;
		
		if(c == '+')
		{
			ans[i].r = number[s].r + number[t].r;
			ans[i].i = number[s].i + number[t].i;
		}
		
		if(c == '-')
		{
			ans[i].r = number[s].r - number[t].r;
			ans[i].i = number[s].i - number[t].i;
		}
		
		if(c == '*')
		{
			ans[i].r = number[s].r * number[t].r - number[s].i * number[t].i;
			ans[i].i = number[s].r * number[t].i + number[s].i * number[t].r;
		}
	}
	
	for(i = 0; i < m; i++)
	{
		printf("%d %d\n", ans[i].r, ans[i].i);
	}
	
	return 0;
}
