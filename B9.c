#include <stdio.h>
int main()
{
    int n, i;
    long x;
    x = 1;
    i = 1;
    do{
        printf("Nhap so n: ");
    scanf("%d", &n);
    if(n<1){
        printf("\n Phai nhap so tu 1 tro len!");
        }
    }while(n<1);
    for(int i=1; i <= n; i++){
        x = x * i;
    }
    printf("\n Tich 1x2x...xn%d la: %ld", i, x);
    return 0;
}