// Your code here...
#include <stdio.h>

int main (){
    int n,arr[100];
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int isprint = 0;
    for (int i=1;i<n;i++){
        if (arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            printf("%d",arr[i]);
            isprint = 1;
            break;}
    }
    if (!isprint)
        printf("%d",-1);
}