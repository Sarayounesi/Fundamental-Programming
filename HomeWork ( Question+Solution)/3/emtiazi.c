#include<stdio.h>

void calc(int two , int five , int ten){
	int temp2 = two , temp5 = five , temp10 = ten;
	if(temp2 >= 5){
		temp2 -= 5;
		temp5 += 2;
		printf("%d %d %d\n",temp2,temp5,temp10);
		while(temp5 > 1){
			temp5 -= 2;
			temp10 += 1;
			printf("%d %d %d\n",temp2,temp5,temp10);
		}
		calc(two-5 , five+2 , ten);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int two = 0,five = 0,ten = 0;
	if(n%2 == 1){
		five += 1;
		n -= 5;
	}
	two = n / 2;
	printf("%d %d %d\n",two,five,ten);
	calc(two,five,ten);
}
