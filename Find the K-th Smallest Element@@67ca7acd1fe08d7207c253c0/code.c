// Your code here...

void swap(int *a,int *b){
    int temp= *a;
    *a=*b;
    *b=temp;
}
int kthSmallest(int arr[],int n,int k)
{
    for (int i=0;i<n;i++){
        int isswapped = 0;
        for (int j=i;j<n-1;j++){
            if(arr[j+1]<arr[j]){
                swap(&arr[j+1],&arr[j]);
                isswapped = 1;
            }
        }
        if (!isswapped)
            break;
    }

    for(int i=0;i<n;i++){
        if (k==(i+1))
        return arr[i];
    }
    return -1;
}