

#include<stdio.h>
int main()
{
long long int n,s;
long long int a,b;
	scanf("%lld",&n);
    s=n;
    a,b=0;
	while (n!=0)
	{
		a=n%10;
		b=b*10+a;
		n=n/10;
	}
	if (s==b)
		printf("YES");
	else
		printf("NO");
	return 0;
}