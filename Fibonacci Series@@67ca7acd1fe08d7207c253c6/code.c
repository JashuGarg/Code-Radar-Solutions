#include<stdio.h>
void fibonacciSeries(int n){
    if(n==0 || n==1) printf("%d",1);
    int aNSD= fibonacciSeries(n-1) + fibonacciSeries(n-2);
    printf("%d",aNSD) ;
}