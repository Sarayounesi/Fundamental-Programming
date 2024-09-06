#include <stdio.h>

int main()
{
    int row, chair_number;
    int a;
    scanf("%d %d", &row, &chair_number);
    if(chair_number <= 10) {
        printf("Right ");
        a = chair_number;
    }
    else {
        printf("Left ");
        a = 20 - chair_number + 1;
    }
    printf("%d %d", 10 - row + 1 , a);
    return 0;
}
