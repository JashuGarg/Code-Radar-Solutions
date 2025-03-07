
// Your code here...
void swap (int *a,int *b){
    int temp ;
    temp =*a;
    *a=*b;
    *b=temp;
}

int bubbleSort(int arr[],int n){
    for (int i=n-2;i>=0;i--){
        int isswapped = 0;
        for (int j=0;j<=i;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        if (!isswapped)
            break;
        }
        return arr;
}