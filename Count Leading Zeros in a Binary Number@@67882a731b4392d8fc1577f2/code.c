#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);

    for (int i = 0; i < 32; i++) {
        if ((n & 1) == 0) {
            count++;
        }
        n >>= 1;
    }

    printf("%d\n", count);
    return 0;
}
