#include <stdio.h>
#include <math.h>
int main()
{
    float x, y;
    int n;
    printf("x =");
    scanf("%f", &x);
    printf("so mu =");
    scanf("%d", &n);
    y = pow(x,n);
    printf("ket qua = %f",y);
    return 0;
}