#include<stdio.h>


int main(){
	
	char username[15][100];
	int i , j;
	int res1=0 , res2=0 , res3=0 , res4=0;
	
	for(i=0 ; i<15 ; i++){
		scanf("%s",&username[i]);
		
		if(username[i][0] == 'm' & username[i][1] == 'o' &username[i][2] == 'h' &
			username[i][3] == 'a' &username[i][4] == 'm' &username[i][5] == 'm' &
			username[i][6] == 'a' &username[i][7] == 'd' &username[i][8] == '\0' ){
			res1++;
		}
		
		if(username[i][0] != '\0' & username[i][1] != '\0' &username[i][2] != '\0' &
			username[i][3] != '\0' &username[i][4] != '\0' &username[i][5] != '\0' &
			username[i][6] == '\0'){
			res2++;
		}
		
		if(username[i][0] == 'a' | username[i][0] == 'A'){
			res3++;
		}
		
		for(j = 0 ; username[i][j] != '\0' ; j++){
			if(username[i][j] >= '0' & username[i][j] <= '9'){
				res4++;
				break;
			}
		}
	}
	
	printf("%d\n",res1);
	printf("%d\n",res2);
	printf("%d\n",res3);
	printf("%d\n",res4);
}
