#include <string.h>
void swap(char a[],char b[]){
    char temp[100];
    strcpy(temp,a);
    strcpy(a,b);
    strcpy(b,temp);
}

void insertionSort(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
       int index = i;
       for (int j=i+1;j<n;j++){
            if(strcmp(arr[index],arr[j])>0){
                index = j ;
            }
       }
       swap(arr[index],arr[i]);
    }
}

void printArray(char arr[][100],int n)
{
    for (int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}