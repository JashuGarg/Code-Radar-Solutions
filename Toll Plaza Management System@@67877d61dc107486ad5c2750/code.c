#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    char Number[n][1000];
    char Vehi[n][100];
    int price[100];
    for(int i=0;i<n;i++){
        scanf("%s %s %d",Number[i],Vehi[i],&price[i]);
    }

    float car =0;
    float truck =0;
    float bike =0;
    for (int i=0;i<n;i++){
        if (Vehi[i]=="Car")
            car+= price[i];
        else if (Vehi[i]=="Truck")
            truck += price[i];
        else    
            bike+=price[i];
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",car,truck,bike);
}