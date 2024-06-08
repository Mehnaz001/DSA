//Find Index Of Extra Element
/*You have given two sorted arrays arr1[] & arr2[] of distinct elements. The first array has one element extra added in between.
 Return the index of the extra element.

Note: 0-based indexing is followed.*/

/*Example
Input: n = 7, arr1[] = {2,4,6,8,9,10,12}, arr2[] = {2,4,6,8,10,12}
Output: 4
Explanation: In the first array, 9 is extra added and it's index is 4.*/

 int findExtra(int n, int arr1[], int arr2[]) {
        
        int start=0,end=n-1,mid;
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(arr1[mid]==arr2[mid]){
                start=mid+1;
            }
            else
            end=mid-1;
        }
        
        if(arr1[start]!=arr2[start])
        return start;
        
        return n-1;
    }