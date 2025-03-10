// Your code here...
int findOccurrence (int arr[],int n, int ans,char mode){
    int start = 0,end = n-1,mid;

if (mode=='F')
{
    int first = -1;
    while (start<=end){
        mid = start + (end-start)/2;
        if (arr[mid]==ans){
            first = mid;
            end = mid -1;
        }
        else if (arr[mid]<ans)
            start = mid +1;
        else 
            end = mid -1;
    }
    return first;
}
else
{
start =0 , end = n-1;
    int last = -1;
    while (start<=end){
        mid = start + (end-start)/2;
        if (arr[mid]==ans){
            last = mid;
            start = mid+1;
        }
        else if (arr[mid]<ans)
            start = mid +1;
        else 
            end = mid -1;
    }
    return last;
}

}