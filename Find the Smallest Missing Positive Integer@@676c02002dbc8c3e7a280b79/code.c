// Your code here...
#include <stdio.h>
#include <limits.h>

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


int main (){
    int n,arr[10000];
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    bubbleSort(arr,n);

    int start = 0, end = n-1,mid,ans;
    while (start<=end)
    {
        mid = start + (end-start)/2;

        if (arr[mid]-(mid+1)>0)
            {
                ans = mid;
                end = mid-1;
            }
        else 
            start = mid +1;
    
    }
    printf("%d",ans+1);


}