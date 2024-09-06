#include <stdio.h>

int main() {
    int a = 0, b = 1, c, n;
    scanf("%d", &n);

    for (int i = 0; i < n%60 ; i++) {
        c = a;
        a = b;
        b = (c + b)%10;
    }
    printf("%d",a);

    return 0;
}