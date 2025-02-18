#include <stdio.h>

int main() {
    int n,a=1;
    scanf("%d", &n);

    for (int i =1;i<=n;i++){
        for (int j=1;j<=i;j++){
            printf("%d ",a);
            if(a==0){
                a = 1;
            }else {
                a = 0;
            }
        }
        if (i%2==0){
            a =1;
        }else {
            a=0;
        }
printf("\n");
    }
}
