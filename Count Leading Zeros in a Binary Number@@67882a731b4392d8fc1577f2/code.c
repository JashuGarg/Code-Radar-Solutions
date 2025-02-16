// Your code here...

#include <stdio.h>

int main (){
    int n,count = 0;
    scanf("%d",&n);

    while (True){
        if((a&1)==0){
            count++;
        }
        a = a>>1;
    }
    printf("%d",count);

}