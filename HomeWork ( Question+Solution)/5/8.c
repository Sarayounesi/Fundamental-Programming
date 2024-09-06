#include<stdio.h>
#include<string.h>

void check(int l, char s[], char z[])
{
	int i, j, t = 0;
	int A[26], a[26], num[26];
	
	for(i = 0; i < 26; i++)
	{
		A[i] = a[i] = num[i] = 0;
	}
	
	for(i = 0; i < 26; i++)
	{
		for(j = 0; j < l; j++)
		{
			if(s[j] == 'A' + i && A[i] == 0)
			{
				z[t] = 'A' + i;
				A[i] = 1;
				t++;
			}
			
			if(s[j] == 'a' + i && a[i] == 0)
			{
				z[t] = 'a' + i;
				a[i] = 1;
				t++;
			}
		}
		
		for(j = 0; j < l; j++)
		{
			if(s[j] == '0' + i && num[i] == 0)
			{
				z[t] = '0' + i;
				num[i] = 1;
				t++;
			}
		}
	}
	z[t] = '\0';
}

int main()
{
	int n, i, l, lc;
	char s[100], z[100], c[100];
	
	scanf("%d %s", &n, s);
	
	l = strlen(s);
	
	check(l, s, z);
	
	int a[n];
	
	for(i = 0; i < n; i++)
	{
		scanf("%s", s);
		
		lc = strlen(s);
		
		check(lc, s, c);
		
		if(strcmp(z, c) == 0)
			a[i] = 1;
		else
			a[i] = 0;
	}
	
	for(i = 0; i < n; i++)
	{
		if(a[i] == 1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	
	return 0;
}
