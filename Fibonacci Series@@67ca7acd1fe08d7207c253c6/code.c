// Your code here...M
int fibonacciSeries(int n){
    int a = 0;
    int b = 1;
    int arr[100000];
    arr[0]=0;
    arr[1]=1;
    for (int i=2;i<n+2;i++){
        c = a+b;
        a = b;
        b = c;
        arr[i]=c;
    }
    return arr[];
}