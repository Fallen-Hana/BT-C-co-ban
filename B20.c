#include <stdio.h>
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Can nhap so 0<=");
    }
    for(int i = 1; i <= n; i++)
    {
        if(n%i == 0)
        printf("%4d",i);
    }
    return 0;
}