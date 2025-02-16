#include <stdio.h>

int main (){
    int n,rem=0;
    scanf("%d",&n);
    while(rem>0){
        rem = n%2;
        n = n/2;
        printf("%d",rem);
    }
    return 0;
}