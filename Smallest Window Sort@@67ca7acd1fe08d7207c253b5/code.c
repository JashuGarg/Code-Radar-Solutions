#include <stdio.h>
// #include <stdlib.h>

int findUnsortedSubarray(int arr[], int n) {
    int count = 0;
    for (int i=0;i<n;i++){
        int index = arr[i];
        for (int j=i+1;j<n;j++){
            if (index<arr[j]){
                 int temp = index;
                 index= arr[i];
                 arr[i] = temp;
                 index = arr[j];

            }

            else 
                count++;
            
            
        }

    }
    return count ;
}