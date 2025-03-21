#include <stdio.h>
// #include <stdlib.h>
void swap (int *a,int *b){
    int temp ;
    temp =*a;
    *a=*b;
    *b=temp;
}

int findUnsortedSubarray(int arr[], int n) {
    int count = 0;
    for (int i=0;i<n;i++){
        int index = arr[i];
        for (int j=i+1;j<n;j++){
            if (index<arr[j]){
                swap(&index,&arr[j]);
                index = arr[j];


            }

            else 
                count++;
            
            
        }

    }
    return count ;
}