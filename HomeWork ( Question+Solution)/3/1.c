#include <stdio.h>
void change(int f,int n){

    int h = n-f;
    printf("|");
    for (int i = 0; i <n ; i++) {
        for (int j = 0; j <h ; j++) {
            printf(" ");
        }
        for (int j = 0; j<f ; j++) {
            printf(" #");
        }

        for (int j = 0; j <h ; j++) {
            printf(" ");
        }
        printf(" |");

    }
    printf("\n");

}
int main() {
    int n;
    scanf("%d",&n);

    for(int i=1 ; i<=n ; i++) {
        printf("-");
        for(int s=0 ; s<n ;s++){
        for (int j = 1; j <=(2*n)+2; j++) {
            printf("-");
        }}
        printf("\n");
        for (int j = 1; j <= n;) {
            change(j, n);

            j = j + 2;
        }
        for (int j = n - 2; j > 0;) {
            change(j, n);
            j = j - 2;
        }
    }
    printf("-");
    for(int s=0 ; s<n ;s++){
        for (int j = 1; j <=(2*n)+2; j++) {
            printf("-");
        }}

    return 0;
}
