//Recursion in Binary Search
bool BinarySearch(int arr[], int start, int end, int X) {
    //Base condition
    if(start>end)
    return 0; //Not found

    int mid = start + (end - start)/2;

    if(arr[mid]==X)
    return 1; //Found

    else if(arr[mid]<X)
    return BinarySearch(arr,mid+1,end,X);

    else //if mid>X
    return BinarySearch(arr,start,mid-1,X);
}