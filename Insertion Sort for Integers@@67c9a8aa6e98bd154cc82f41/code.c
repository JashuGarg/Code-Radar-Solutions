void swap(int *a,int *b){
    int temp = *a;
    *a =*b;
    *b = temp; 
}

void insertionSort(int arr[],int n)
{
    for (int =0;i<n;i++){
        int index = i;
        for (int j=i+1;j<n;j++)
        {
            if (arr[j]<arr[i]){
                index = j;
            }
        }
        swap(&arr[index],&arr[j]);
    }
}

void printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}