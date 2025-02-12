#include <stdio.h>

int main (){
    int a ,b,rem,i=0;
    scanf("%d %d",&a,&b);
    
    while(a>0){
        rem = a%2;
        a = a/2;
        if(b==i){
            printf("%d\n",rem);
            return 0;
        }

        i++;
    }
    return 0;
}