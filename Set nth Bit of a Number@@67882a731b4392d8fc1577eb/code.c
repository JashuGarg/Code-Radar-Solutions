// Your code here...
#include <stdio.h>
int main (){
    int n,a;
    scanf("%d %d",&n,&a);

    int m = a|(1>>a);
    printf("%d",m);

}