#include <stdio.h>

int main() {
    int num, position;
    scanf("%d %d", &num, &position);
    
    int bit = (num >> position) & 1;
    printf("%d\n", bit);
    
    return 0;
}