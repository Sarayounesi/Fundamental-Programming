#include<stdio.h>
int main()
{
    int x;
	int y=0;
	int part1=0,part2=0;
	int firstmashin=0,nextmashin=0;
	
	
    scanf("%d",&x);
    int arry[x];
    for(int i=0;i<x;i++){
        scanf("%d",&arry[i]);
    }
    for(int i=0;i<x;i++){
        if(arry[ i]==4){
            y=y+arry[i];
        }
		if (arry[i]==2 ){
		 y=y+arry[i];
		}
        if(arry[ i]==3){
            part2++;
        }
        if(arry[ i]==1){
            part1++;
        }
    }
    if(part1<=part2){
        firstmashin=part2;
    }
    if(part1>part2){
       firstmashin =part2;
        y=y+part1-part2;
    }
    nextmashin=y/4;
    if(y%4==0){
        printf("%d",nextmashin+firstmashin);
    }
    else{
        printf("%d",nextmashin+firstmashin+1);
    }
    return 0;
}