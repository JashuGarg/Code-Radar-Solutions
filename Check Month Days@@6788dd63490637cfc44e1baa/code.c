// Your code here...

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    if (n==1 ||n==3 ||n==5 || n==7 || n==8 ||n==10 ||n==12){
        printf("%d",31);   
    }else if (n==2){
        printf("%d",28);
    }else if (n==4 || n==6||n==9||n==11) {
        printf("%d",30);
    }else {
        printf("Invalid month");
    }
    return 0;
}