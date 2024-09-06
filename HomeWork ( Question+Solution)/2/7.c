#include<stdio.h>

int main() {
	int n, k, i = 1, t = 0;
	
	scanf("%d %d", &n, &k);
	
	
	while(1) {
		if(n == 1) {
			t = 1;
			break;
		}
		i = i + k;
		t++;
		
		if(i > n)
			i = i % n;
			
		if(i == 1)
			break;
	}
	
	printf("%d", t);
	
	return 0;  
}
