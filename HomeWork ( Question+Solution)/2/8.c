#include <stdio.h>


int main() {
	
	int n, l, i, dis, time = 0, x = 0, s;
  
	scanf("%d %d", &n, &l);
	
	int d[n], r[n], g[n];
  
	for(i = 0; i < n; i++) {	
        scanf("%d %d %d", &d[i], &r[i], &g[i]);
    }
    
    for(i = 0; i < n; i++) {
    	if(i == 0)
    		dis = d[i];
    	else
    		dis = d[i] - d[i-1];
    		
    	time = time + dis;
    	x = x + dis;
    	s = time % (r[i] + g[i]);
    	
    	if(s < r[i])
    		time = time  + r[i] - s;
	}
	
	if(x < l);
		time = time + l - x;
	
	printf("%d", time);
	 
	return 0;
}
