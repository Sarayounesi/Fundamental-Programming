#include<stdio.h>
void star_one_line(int i)
{
    if(i==0)
        return;
    else{
        printf("*");
        star_one_line(i-1);
    }
}
void star(int i,int n)
{
    if(i==n+1)
        return;
    else{
        star_one_line(i);
        printf("\n");
        star(i+1,n);
    }
}
int main()
{
    int i,n;
    scanf("%d%d",&i,&n);
    star(i,n);
    return 0;
}
