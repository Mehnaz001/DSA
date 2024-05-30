//Count the Zeroes

/*Given an array arr of size N consisting only 0's and 1's.The array is sorted in such a manner that all the 1's are placed first
and then they are followed by all the zeroes. Find the count of all the 0's*/

int countZeroes(int arr[], int n) {
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0)
            count++;
        }
        return count;
    }