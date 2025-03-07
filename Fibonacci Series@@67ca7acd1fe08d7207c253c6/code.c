// Your code here...M
int fibonacciSeries(int n){
    int a = 0;
    int b = 1;
    jcout<<a << " "<< b;
    for (int i=2;i<n+2;i++){
      int c = a+b;
        a = b;
        b = c;
        cout<<c<< " ";
    }
}