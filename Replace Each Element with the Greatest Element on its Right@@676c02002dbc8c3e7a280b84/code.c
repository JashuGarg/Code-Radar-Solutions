#include <stdio.h>

int main (){
    int arr[100],n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    for (int i=0;i<n;i++){
            int no = arr[i+1];
        for (int j=i+1;j<n;j++){
            if (no>arr[j])
                no = arr[j];
            arr[i]=no;
        }
    }
    arr[n-1] = -1;

     for (int i=0;i<n;i++)
        printf("%d ",arr[i]);
    
}