//Peak Index in a mountain array
/*Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].
You must solve it in O(log(arr.length)) time complexity*/

    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0,end=arr.size()-1,mid;
        while(start<=end)
        {
            mid=end+(start-end)/2;
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
            return mid;
            else if(arr[mid]>arr[mid-1]){
                start=mid+1;
            }
            else
            end=mid-1;
        }
        return -1;
    }