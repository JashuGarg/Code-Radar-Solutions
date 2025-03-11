// Your code here...
#include <stdio.h>

int main (){
    int n,arr[1000],target;

    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    int index = -1;
    for(int i=0;i<n;i++){
        if (arr[i]==target){
            index =i;
        }
    }
    printf("%d",index);
}