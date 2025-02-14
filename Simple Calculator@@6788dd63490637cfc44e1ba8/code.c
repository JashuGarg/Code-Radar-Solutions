#include <stdio.h>

int main() {
    int a, b;
    char c;

    scanf("%d %d %c", &a, &b, &c);

    if (c == '+') {
        printf("Result: %d\n", a + b);
    } else if (c == '-') {
        printf("Result: %d\n", a - b);
    } else if (c == '*') {
        printf("Result: %d\n", a * b);
    } else if (c == '/') {
        if (b != 0) {  // Prevent division by zero
            printf("%.2f\n", (float)a / b);
        } else {
            printf("Error: Division by zero is not allowed!\n");
        }
    } else {
        printf("Invalid operator!\n");
    }

    return 0;
}
