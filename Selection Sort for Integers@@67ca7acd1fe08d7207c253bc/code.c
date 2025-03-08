void swap (int *a,int *b){
    int temp = *a;
    *a=*b;
    *b =temp;
}


void selectionSort (int arr[],int n){
    
    for (int i=0;i<n;i++){
        int index =i;
        for (int j =1;j<n;j++){
            if (arr[index]>arr[j])
                index =j;
        }
        swap (&arr[i],&arr[index]);
    }
}
void printArray (int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}