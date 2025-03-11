// Your code here...
#include <stdio.h>
int countinteger(int arr[],int n,int num){
    int count = 0;
    for (int i=0;i<n;i++){
        if (arr[i]==num){
            count++;
        }
    }
    return count;
}
int main (){
    int n,arr[10000];

    scanf("%d",&n);
    for (int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int majority = n/2;
    for (int i=0;i<n;i++){
        int count = countinteger(arr,n,arr[i]);
        if (count>majority){
            printf("%d",arr[i]);
        }
    }



}