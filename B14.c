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
    for(int i = 1; i <= n; i++){
         y = y + pow(x,(2*i)+1);
    }
    printf("ket qua = %f",y);
    return 0;
}