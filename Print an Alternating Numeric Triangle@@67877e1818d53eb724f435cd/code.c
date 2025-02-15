// Your code here...
#include <stdio.h>

int main (){
    int n, alter=1 ;
    scanf("%d",&n);

    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",alter);
            if(alter==0){
                alter = 1;
            }else {
                alter = 0;
            }
            
        }printf("\n");
    }
}