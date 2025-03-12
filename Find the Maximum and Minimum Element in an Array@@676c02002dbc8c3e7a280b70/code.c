#include <stdio.h>
#include <limits.h>
int max(int arr[],int n){
    int max =INT_MIN;
    for (int i=0;i<n;i++){
        if (arr[i]>max)
            max=arr[i];
    } 
    return max;
}
int min(int arr[],int n){
    int min =INT_MAX;
    for (int i=0;i<n;i++){
        if (arr[i]<min)
            min=arr[i];
    } 
    return min;
}
int main (){
    int arr[1000],n;
    scanf("%d",&n);
    
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int maximum = max(arr,n);
    int minimum = min(arr,n);
    printf("%d %d",minimum,maximum);
    
}