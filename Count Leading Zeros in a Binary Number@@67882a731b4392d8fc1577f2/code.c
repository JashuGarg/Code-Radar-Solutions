// Your code here...

#include <stdio.h>

int main (){
    int n,count = 0;
    scanf("%d",&n);

    while (1){
        if((a&1)==0){
            count++;
        }
        a = a>>1;
    }
    printf("%d",count);

}