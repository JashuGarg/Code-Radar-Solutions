#include <stdio.h>

int main (){
    int n,rem;
    scanf("%d",&n);
    for (int i=1;rem>0;i++){
        rem = n%2;
        n = n/2;
        printf("%d",rem);
    }
    return 0;
}