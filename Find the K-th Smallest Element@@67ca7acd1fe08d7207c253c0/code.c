// Your code here...
int kthSmallest(int arr[],int n,int k)
{
    int start = 0,end = n-1,ans = n,mid;

    while (start<=end)
    {
        mid = start + (end-start)/2;
        if (arr[mid]-(mid+1)>=k){
            ans = mid;
            end = mid -1;
        }else 
            start = mid+1;
    }
    return ans+k;
}