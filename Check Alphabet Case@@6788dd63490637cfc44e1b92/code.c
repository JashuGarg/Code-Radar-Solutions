#include <stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    
    if(a<='Z' && a>='A'){
        printf("Uppercase");
    }
    else if(a<='z' && a<='a'){
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }
}
