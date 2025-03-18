#include <stdio.h>

int main (){
    int arr[100],n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    for (int i=0;i<n;i++){
        for (int j=i+1;i<n;i++){
            if (arr[i]<arr[j]){
                arr[i]=arr[j];
            }
        }
    }
    arr[n-1] = -1;

     for (int i=0;i<n;i++)
        printf("%d ",arr[i]);
    
}