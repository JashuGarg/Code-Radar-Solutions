#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b,product;
    scanf("%f %f",&a,&b);
    product = a*b;
    printf("Product: %.2f", product);

    return 0;
}