void selectionSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {  
        int index = i;
        for (int j = i + 1; j < n; j++) {  
            if (arr[j] < arr[index])
                index = j;
        }
        char *temp = arr[i];
        arr[i]=arr[index];
        arr[index]= *temp;
    }
}

void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}
