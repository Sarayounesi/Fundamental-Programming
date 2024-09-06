#include <stdio.h>
#include <string.h>


int main()
{
    int i,j,hold;
    int n;
    
    scanf("%d",&n);
    int id[n],maghadir[n],a[n];
    
    for(i=0;i<n;i++){
    	scanf("%d",&maghadir[i]);
    	a[i]=maghadir[i];
	}
    for(i=0;i<n;i++)
    	scanf("%d",&id[i]);	
    for (i = 0; i < n - 1 ; i++ )
        for (j = 0; j < n - 1; j++ )
            if ( a[ j ] < a[ j + 1 ] ) {
            	hold = a[ j ];
	            a[ j ] = a[ j + 1 ];
	            a[ j + 1 ] = hold;
			}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]==maghadir[j]){
				printf("%d ",id[j]);
			}
		}
	}
    return 0;
}

