#include <stdio.h>
int main(){
    int a,b; 
    scanf("%d %d",&a,&b);

    int m = (a>>b)&0;
    printf("%d",m);
}