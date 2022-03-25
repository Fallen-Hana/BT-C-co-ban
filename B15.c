#include <stdio.h>
#include <math.h>
int main()
{
    float x, y;
    int n;
    x = 0;
    y = 0;
    printf("x =");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
         x = x + i;
         y = y + 1.0/x;
    }
    printf("ket qua = %f",y);
    return 0;
}