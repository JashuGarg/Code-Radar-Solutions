#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);

    int found_one = 1; 

    for (int i = 0; i < 32; i++) {
        if (n & 1) {
            found_one = 0; 
        } else if (found_one) {
            count++;
        }
        n >>= 1;
    }
    printf("%d\n", count);
    return 0;
}