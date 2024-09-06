#include <stdio.h>

double fact(long long int n) {
	long long int i;
	double ans = 1;
	
	if(n == 0 || n == 1)
		return 1;
		
	for(i = n; i > 1; i--) {
		ans = ans * i;
	}
	
	return ans;
}

int main() {
	long long int n, k;
	double t = 0;
	
	scanf("%lld", &n);
	
	if(n == 1) {
		printf("1");
		return 0;
	}
	
	for(k = 0; n >= 0; k++, n--) {
		t = t + (fact(n) / (fact(n - k) * fact(k)));
	}
	
	printf("%.0lf", t);
	
	return 0;
}
