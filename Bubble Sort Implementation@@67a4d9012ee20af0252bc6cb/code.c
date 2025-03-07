
// Your code here...
void swap (int *a,int *b){
    int temp ;
    temp =*a;
    *a=*b;
    *b=temp;
}

void bubbleSort(int arr[],int n){
    for (int i=n-2;i>=0;i--){
        int isswapped = 0;
        for (int j=0;j<=i;j++){
            if (arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                isswapped =1;
            }
        }
        if (!isswapped)
            break;
        }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}