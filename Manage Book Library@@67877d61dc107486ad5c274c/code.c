// Your code here...
// Your code here...
#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    char title[n][1000];
    char author[n][100];
    float price[100];
    for(int i=0;i<n;i++){
        scanf("%s %s %f",title[i],author[i],&price[i]);
    }
    float limit ;
    scanf("%f",&limit);
    for(int i=0;i<n;i++){
        if(i==0)
            printf("Books above price %.2f:\n");
        
        if(price[i]>limit){
            printf("Title: %s, Author: %s, Price: %.2f",title[i],author[i],price[i]);
        }
    }
}