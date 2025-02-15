#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (int j = 1; j <= i; j++) {  // Loop for columns
            printf("%d ", (i + j) % 2);  // Alternate between 1 and 0
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
