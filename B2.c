#include <stdio.h>
int main()
{
    int n;
    long x = 0;
    printf("Nhap so n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        x = x + i*i;
    }
    printf("\n Tong 1^2 +...+ %d^2 la %ld", n, x);
    return 0;
}