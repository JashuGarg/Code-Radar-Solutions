int searchInRotatedArray(int arr[],int n,int target){
    int start = 0,end = n-1,mid ;
    int ans = -1;
    while (start<=end)
    {
        mid = start + (end-start)/2;
        if (arr[mid]==target){
            ans = mid;
            break;
        }

        else if (arr[mid]>target){
            if(arr[start]<target && arr[mid]>target)
                end = mid -1;
            else 
                start = mid +1;
        }else {
            if(arr[mid]<target && arr[end]>target)
                start = mid +1;
            else 
                end = mid -1;
        }
    }
    return ans;
}