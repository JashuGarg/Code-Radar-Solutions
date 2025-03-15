#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char name[100], type[20];
    float cost;

    int basic_count = 0, standard_count = 0, premium_count = 0;
    float basic_revenue = 0, standard_revenue = 0, premium_revenue = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", name, type, &cost);

        if (strcmp(type, "Basic") == 0) {
            basic_count++;
            basic_revenue += cost;
        } else if (strcmp(type, "Standard") == 0) {
            standard_count++;
            standard_revenue += cost;
        } else if (strcmp(type, "Premium") == 0) {
            premium_count++;
            premium_revenue += cost;
        }
    }

    printf("Basic: %d Users, Revenue: %.2f; ", basic_count, basic_revenue);
    printf("Standard: %d Users, Revenue: %.2f; ", standard_count, standard_revenue);
    printf("Premium: %d Users, Revenue: %.2f\n", premium_count, premium_revenue);

    return 0;
}
