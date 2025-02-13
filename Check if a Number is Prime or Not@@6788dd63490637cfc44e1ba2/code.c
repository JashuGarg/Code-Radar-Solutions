#include <stdio.h>

int main() {
    int n, i = 2;
    scanf("%d", &n);

    if (n <= 0) printf("Invalid");
    else if (n == 1) printf("Not Prime");
    else {
        while (i * i <= n && n % i) i++;
        printf(i * i > n ? "Prime" : "Not Prime");
    }

    return 0;
}
