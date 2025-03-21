#include <stdio.h>
#include <limits.h>
int bubbleSort(int arr[],int n){
    for (int i=n-2;i>0;i--){
        int isswapped = 0;
        for (int j=0;j<i;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isswapped = 1;
            }
        }
        if (!isswapped)
            break;
    }
}
int main (){
    int n,arr[100];

    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    bubbleSort(arr,n);
    int ind1,ind2;
    int min = arr[n-1]-arr[0];
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[j]-arr[i]<min){
                min = arr[j]-arr[i];
            }
            else {
                ind1 = j,ind2= i;
                break;
                }
        }
    }

    printf("%d %d",arr[ind1],arr[ind2]);


    // printf("%d %d",arr[start],arr[end]);


}