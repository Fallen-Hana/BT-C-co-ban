#include <stdio.h>
#include <math.h>
int main(){
    int n;
    long x, y;
    printf("Nhap so n: ");
    scanf("%d", &n);
    if(n<1){
        printf("\n Phai nhap so tu 1 tro len!");
        return 0;
    }
    for(int i = 1; i <= n; i++){
        x = x*i;
        y = y+x;
    }
    printf("So can tim la: %d",y);
    return 0;
}