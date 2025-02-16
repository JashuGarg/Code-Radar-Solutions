#include <stdio.h>

int main() {
    int n, rem = 0;
    scanf("%d", &n);
    
    long long binary = 0, place = 1;

    while (n > 0) {
        rem = n % 2;
        binary += rem * place;
        n /= 2;
        place *= 10;
    }

    printf("%lld", binary);
    return 0;
}
