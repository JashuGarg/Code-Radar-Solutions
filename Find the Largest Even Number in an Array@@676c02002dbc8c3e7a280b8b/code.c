// Your code here...
#include <stdio.h> 

int main (){
    int n , arr[1000];
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    //bubble sort 

    for (int i=n-2;i>=0;i--){
        int isswapped = 0;
        for (int j=0;j<=i;j++){
            if (arr[j]<arr[j+1])
            {   
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isswapped=1;
            }
        }
        if (!isswapped)
            break;
    }
    int isprint= 0;
    for (int i=0;i<n;i++){
        if (arr[i]%2==0){
            printf("%d",arr[i]);
            break;
        }
    }
    if (!isprint)
        printf("%d",-1);
    

}