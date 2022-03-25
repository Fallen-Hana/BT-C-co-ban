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
        x = x + 1.0/i;
    }
    printf("\n Tong 1+ 1/2 +...+ 1/%d la %.2f", n, x);
    return 0;
}