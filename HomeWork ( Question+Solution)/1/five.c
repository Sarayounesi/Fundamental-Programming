#include <stdio.h>

int main()
{
    char first_character, second_character; 
    int first_number, second_number, third_number;
    scanf("%d%c%d%c%d",&first_number, &first_character ,&second_number , &second_character ,&third_number);
    printf("%c %c", first_character, second_character);

    return 0;
}

