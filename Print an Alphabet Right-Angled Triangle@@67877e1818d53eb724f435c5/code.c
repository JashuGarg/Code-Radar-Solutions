#include <stdio.h>
int main (){
    int n;
    char m = 'A';
    scanf("%d",&n);

    for(int i =1;i<=n;i++){
        for (int j=0;j<i;j++){
            m = m+j ;
            printf("%c ",m);
        }printf("\n");
    }
}