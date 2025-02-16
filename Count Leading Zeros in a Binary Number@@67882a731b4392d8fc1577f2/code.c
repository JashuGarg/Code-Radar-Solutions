#include <stdio.h>

int main (){
    int n,count = 0;
    scanf("%d",&n);

    for (int i =1;i<32;i++){
        if((a&1)==0){
            count++;
        }
        a = a>>1;
    }
    printf("%d",count);

}