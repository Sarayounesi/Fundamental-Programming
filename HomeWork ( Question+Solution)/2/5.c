#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,n,result = 0;
    scanf("%d%d%d",&a,&b,&n);
    // convert base a to 10
    int decimal = 0,q;
    if(a == 10)
        decimal = n;
    else {
        int counter = 0;
        while (n!=0) {
            q = n % 10;
            n /= 10;
            decimal += q * (int)pow(a,counter);
            counter++;
        }
    }
    if (b == 10) {
        result = decimal;
    }
    // convert base 10 to b
    else {
        int i =0,r;
        while(decimal!=0) {
            r = decimal % b;
            decimal /= b;
            result += pow(10,i) * r;
            i++;
        }
    }
    printf("%d",result);

    return 0;
}
