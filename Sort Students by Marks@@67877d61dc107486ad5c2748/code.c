#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int roll[n];
    char name[n][50];  
    float marks[n];

    // Input student data
    printf("Enter roll number, name, and marks for each student:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &roll[i], name[i], &marks[i]);
    }

    // Sorting based on marks in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (marks[i] < marks[j]) {
                // Swap marks
                float tempMarks = marks[i];
                marks[i] = marks[j];
                marks[j] = tempMarks;

                // Swap roll numbers
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
        printf("%d %s %.2f\n", roll[i], name[i], marks[i]);
    }

    return 0;
}
