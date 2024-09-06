#include<stdio.h>
int main(){
	int max=0 , maxNamber , count=0 , i , j;
	int arry[50];
	for(i=0; i<50 ; i++)
		scanf("%d", &arry[i]);
	for(j=0; j<50 ; j++){
		for(i=0; i<50 ; i++){
			if(arry[j]==arry[i])
				count++;
			}	
		if(count>max){
			max=count;
			maxNamber=arry[j];
		}
		count=1;
	}
	printf("%d", maxNamber);
}
