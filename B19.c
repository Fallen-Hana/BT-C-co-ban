#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, z, p;
    int n,m;
    y = 1;
    z = 1;
    printf("Nhap m: ");
    scanf("%d", &m);
    printf("Nhap so mu: ");
    scanf("%d", &n);
    if(n<1){
        printf("\n Phai nhap so tu 1 tro len!");
        return 0;
    }

    for(int i = 1; i <= n; i++){
         p = pow(m, (2*i+1));
         x = i * 2 + 1;
         y = y * x * (x-1);
         z = z + m + x/y;
    }
    printf("ket qua = %f",z);
    return 0;
}