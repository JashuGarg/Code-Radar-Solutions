void swap(char *a,char *b){
    char temp = *a;
    a* = *b;
    *b = temp;
}

void insertionSort(char arr[],int n){
    for (int i=0;i<n;i++){
        int index=i;
        for (int j=i+1;j<n;j++){
            if(arr[j]<arr[index])
                index = j;
        }
        swap(&arr[index],&arr[i]);
    }
}

void printArray(char arr[],int n){
    for (int i=;i<n;i++){
        printf("%c ",arr[i]);
    }
}