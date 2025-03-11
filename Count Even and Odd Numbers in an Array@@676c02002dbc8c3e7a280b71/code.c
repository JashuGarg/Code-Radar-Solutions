// Your code here...
#include <stdio.h>

int countodd(int arr[],int n){
    int odd = 0;
     for(int i=0;i<n;i++){
        if (arr[i]%2!=0){
            odd++;
        }
    }
    return odd;
}
int counteven(int arr[],int n){
    int even = 0;
     for(int i=0;i<n;i++){
        if (arr[i]%2==0){
            even++;
        }
    }
    return even;
}

int main (){
    int n,arr[1000];

    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int odd = countodd(arr,n);
    int even = counteven(arr,n);

    printf("%d %d",even,odd);
}