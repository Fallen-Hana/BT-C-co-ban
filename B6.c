#include <stdio.h>
int main()
{
    int n;
    float x;
    x = 0;
    printf("Nhap so n: ");
    scanf("%d", &n);
    if(n<1){
        printf("\n Phai nhap so tu 1 tro len!");
        return 0;
    }
    for(int i = 1; i <= n; i++){
        x = x + 1.0/(i*(i + 1));
    }
    printf("\n Tong la %f",x);
    return 0;
}