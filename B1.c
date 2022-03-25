#include <stdio.h>
int main()
{
    int n;
    long x;
    x = 0;
    printf("Nhap so n: ");
    scanf("%d", &n);
    for(int i=1; i <= n; i++){
        x = x + i;
    }
    printf("\n Tong 1 +...+ %d la %ld", n, x);
    return 0;
}