#include <stdio.h>

int main (){
    int n,rem=0;
    scanf("%d",&n);
    int binary = 0, place = 1;

    while (num > 0) {
        remainder = num % 2;
        binary += remainder * place;
        num /= 2;
        place *= 10;
    }
    printf("%d",binary);
    return 0;
}