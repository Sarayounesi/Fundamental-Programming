#include <stdio.h>

int main(void){
	int length;
	int width;
	int area ;
    int perimetr;
	   
	
	scanf("%d %d" , &length ,&width );

	 perimetr=((width+length)*2);
	 area=width*length;
	printf("%d %d" ,perimetr , area );  

return 0;

}