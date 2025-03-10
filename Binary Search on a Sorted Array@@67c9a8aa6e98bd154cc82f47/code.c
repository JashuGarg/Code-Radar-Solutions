// Your code here...

binarySearch(int arr[],int n,int target){
    int start = 0, end = n-1,mid;

    while (start<=end){
        mid = start + (end-start)/2;
        if (arr[mid]==target)
            return mid;
        else if (arr[mid]<target)
            start = mid +1;
        else 
            end = mid -1;           
    }
}