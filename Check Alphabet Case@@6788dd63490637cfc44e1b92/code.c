#include <stdio.h>



int main() {
    char a;
    int num;
    scanf("%c",a);
    
    if('a'<=a<='z'){
        printf("Uppercase");
    }else if ('A'<=a<='Z'){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    
}