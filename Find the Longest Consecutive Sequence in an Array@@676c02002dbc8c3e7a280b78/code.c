// Your code here...
#include <stdio.h>

void bubbleSort(int arr[],int n){
    for (int i=0;i<n;i++){
        int isswapped = 0;
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
                isswapped = 1;
            }
        }
        if(!isswapped)
            break;
    }
}

int main (){
    int n,arr[100];

    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    bubbleSort(arr,n);
    int count = 1,maxcount = 1;
    for (int i=0;i<n-1;i++){
        if ((arr[i+1]-arr[i])==1)
            count++;
        else if (arr[i+1]!=arr[i]){
            if (count>maxcount){
                maxcount =count;
                }
            count =1;
        }

    }
    if (maxcount<count)
    maxcount= count;

    printf("%d",maxcount);
}