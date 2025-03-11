// Your code here...
#include <stdio.h>

int isSorted(int arr[],int n){
    for (int i=0;i<n-1;i++){
        if (arr[i+1]>arr[i]){
            return 0;
        }
        return 1;
    }
}
int inputarr(int n){
    int arr[];
    for (int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    return arr;
}
int main(){
    int arr[],n;
    scanf ("%d",&n);
    
}