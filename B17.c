#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, z;
    int n,m;
    x = 1;
    y = 1;
    z = 0;
    printf("Nhap m: ");
    scanf("%d", &m);
    printf("Nhap so mu: ");
    scanf("%d", &n);
    if(n<1){
        printf("\n Phai nhap so tu 1 tro len!");
        return 0;
    }

    for(int i = 1; i <= n; i++){
         x = x * m;
         y = y * i;
         z = z + x/y;
    }
    printf("ket qua = %f",z);
    return 0;
}