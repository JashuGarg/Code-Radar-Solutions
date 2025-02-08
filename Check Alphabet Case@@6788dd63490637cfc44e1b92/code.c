#include <stdio.h>



int main() {
    char a;
    int num;
    scanf("%c",a);
    num = a;
    if('a'<=num<='z'){
        printf("Uppercase");
    }else if ('A'<=num<='Z'){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    
}