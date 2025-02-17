#include <stdio.h>

int main (){
    int n;
    scanf("%d",&n);
    printf("%d\n",n&(1<<31));
    if ((n&(1<<31))==1){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}