#include <stdio.h>

int main (){
    int a ,b,rem,i=1;
    scanf("%d %d",&a,&b);
    
    while(a>0){
        rem = a%2;
        a = a/2;
        if(b==i){
            printf("%d\n",rem);
            break;
        }
        i++;
    }
    return 0;
}