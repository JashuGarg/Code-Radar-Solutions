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

int main(){
    int arr[1000],n;
    scanf ("%d",&n);

    for (int i=0;i<n;i++){
      scanf("%d", &arr[i]);
    }
    if(isSorted()){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
}