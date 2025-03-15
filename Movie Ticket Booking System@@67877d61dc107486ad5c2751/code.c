#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char Number[n][1000];
    char Vehi[n][100];
    int price[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %s %d", Number[i], Vehi[i], &price[i]);
    }

    float car = 0;
    float truck = 0;
    float bike = 0;

    for (int i = 0; i < n; i++) {
        if (strcmp(Vehi[i], "Standard") == 0)
            car += price[i];
        else if (strcmp(Vehi[i], "Premium") == 0)
            truck += price[i];
        else
            bike += price[i];
    }

    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f", car, truck, bike);

    return 0;
}
