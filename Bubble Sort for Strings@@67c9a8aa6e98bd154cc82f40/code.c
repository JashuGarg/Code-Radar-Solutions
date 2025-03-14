#include <stdio.h>
#include <string.h>

void swap(char a[], char b[]) {
    char temp[100];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void bubbleSort(char arr[][100], int n) {
    for (int i = n - 2; i >= 0; i--) {
        int isswapped = 0;
        for (int j = 0; j <= i; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                swap(arr[j], arr[j + 1]);
                isswapped = 1;
            }
        }
        if (!isswapped)
            break;
    }
}

void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}

