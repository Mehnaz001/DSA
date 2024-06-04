//Seggregate 0 and 1's
/*Given an array of length n consisting of only 0's and 1's in random order. Modify the array in-place to segregate 0s on the left side and 1s on the right side of the array.*/

 void segregate0and1(int arr[], int n) {
        int start=0,end=n-1;
        while(start<=end)
        {
            if(arr[start]==0)
            start++;
            else{
                if(arr[end]==0){
                    swap(arr[start],arr[end]);
                    start++;
                    end--;
                }
                else
                end--;
            }
        }
    }