// Your code here...
#include <stdio.h>

int main (){
    int n;
    scanf("%d",&n);

    for (int i=1;i<=n;i++){
        int alter = 1;
        for(int j=1;j<=i;j++){
            printf("%d ",alter);
            if(alter==0){
                alter = 1;
            }else {
                alter = 0;
            }
            
        }printf("\n");
    }
}