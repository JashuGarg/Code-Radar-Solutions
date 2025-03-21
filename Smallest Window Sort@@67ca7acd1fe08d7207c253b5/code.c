#include <stdio.h>
#include <stdlib.h>

int findUnsortedSubarray(int arr[], int n) {
    int start=-1,end=-1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            start = i;
            break;
        }
    }
    
    if (start==-1){
        return 0;
    }

    if(arr[start]>arr[n-1])
        end=n-1;
    else{
        for (int i = n - 1; i > 0; i--) {
            if (arr[i] < arr[i - 1]) {
                end = i;
                break;
            }
        }
    }

    int min=arr[start],max=arr[start];
    for (int i=start;i<=end;i++){
        if (arr[i]<min)min=arr[i];
        if (arr[i]>max)max=arr[i];
    }

    for (int i=0;i<start;i++){
        if(arr[i]>min){
            start=i;
            break;
        }
    }

    return (end - start + 1);
}