//Find the minimum element in rotated sorted array
/*Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

[4,5,6,7,0,1,2] if it was rotated 4 times.
[0,1,2,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

Given the sorted rotated array nums of unique elements, return the minimum element of this array.

You must write an algorithm that runs in O(log n) time.*/

int findMin(vector<int>& nums) {
        int start=0,end=nums.size()-1,mid,ans=nums[0];
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]>=nums[0])
            start=mid+1;
            else{
                ans=nums[mid];
                end=mid-1;
            }
        }
        return ans;
    }

