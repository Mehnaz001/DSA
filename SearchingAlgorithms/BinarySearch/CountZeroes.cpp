//Count the Zeroes

/*Given an array arr of size N consisting only 0's and 1's.The array is sorted in such a manner that all the 1's are placed first
and then they are followed by all the zeroes. Find the count of all the 0's*/

int countZeroes(int arr[], int n) {
        int start=0,end=n-1,mid,first=-1,last=-1;
        
        while(start<=end){
            mid=(start+end)/2;
            if(arr[mid]==0){
                first=mid;
                end=mid-1;
            }
            else if(arr[mid]>0)
            start=mid+1;
            else
            end=mid-1;
        }
        
        start=0,end=n-1;
        while(start<=end){
            mid=(start+end)/2;
            if(arr[mid]==0){
                last=mid;
                start=mid+1;
            }
            else if(arr[mid]>0)
            start=mid+1;
            else
            end=mid-1;
        }
        int count=last-first+1;
        return count;
}