// Your code here...
#include <stdio.h>

int SecondLargest(int arr[],int n){
    int min = INT_MIN;
    for (int i=0;i<n;i++){
        if (arr[i]>min){
            min = arr[i];
        }
    }
    int second = INT_MIN;
    for (int i=0;i<n;i++){
        if (arr[i]==ans){
            continue;
        }else {
            if (arr[i]>min){
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
        scanf("%d",&arr[i];)
    }
    int ans = second(arr,n);
    printf("%d",ans);
}