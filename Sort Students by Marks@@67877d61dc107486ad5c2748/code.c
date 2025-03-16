#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    int roll[n];
    char name[n][50];  
    float marks[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &roll[i], name[i], &marks[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (marks[i] < marks[j]) {
                // Swap marks
                float tempMarks = marks[i];
                marks[i] = marks[j];
                marks[j] = tempMarks;

                // Swap numbers
                int tempRoll = roll[i];
                roll[i] = roll[j];
                roll[j] = tempRoll;

                // Swap names
                char tempName[50];
                strcpy(tempName, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], tempName);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", roll[i], name[i], marks[i]);
    }

    return 0;
}
