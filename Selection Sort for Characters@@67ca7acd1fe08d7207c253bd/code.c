// Your code here...
void swap (char *a,char *b){
    char temp = *a;
    *a=*b;
    *b =temp;
}


void selectionSort (char arr[],int n){
    
    for (int i=0;i<n;i++){
        int index =i;
        for (int j =i+1;j<n;j++){
            if (arr[index]>arr[j])
                index =j;
        }
        swap (&arr[i],&arr[index]);
    }
}
void printArray (char arr[],int n){
    for (int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}