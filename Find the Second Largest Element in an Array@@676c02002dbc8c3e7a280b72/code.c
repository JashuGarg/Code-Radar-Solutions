// Your code here...
#include <stdio.h>

int SecondLargest(int arr[],int n){
    int min = arr[0];
    for (int i=0;i<n;i++){
        if (arr[i]>min){
            min = arr[i];
        }
    }
    int second = -1;
    for (int i=0;i<n;i++){
        if (arr[i]==min){
            continue;
        }else {
            if (arr[i]>second){
            second = arr[i];
        }
        }
    }
    return second;
}

int main (){
    int n,arr[10000];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans = SecondLargest(arr,n);
    printf("%d",ans);
}