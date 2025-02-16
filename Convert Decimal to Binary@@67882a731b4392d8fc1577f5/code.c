#include <stdio.h>

int main (){
    int n,rem=0;
    scanf("%d",&n);
    int binary = 0, place = 1;

    while (num > 0) {
        rem = n % 2;
        binary += rem * place;
        n /= 2;
        place *= 10;
    }
    printf("%d",binary);
    return 0;
}