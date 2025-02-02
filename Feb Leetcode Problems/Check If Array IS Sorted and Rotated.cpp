class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int rotation=0;
        int index;
        bool sorted = true;
        for(int i=0; i<n-1; i++) {
            if(nums[i]>nums[i+1]) {
                rotation++;
                index=i;
            }
        }
        if(rotation==0)
        return true;

        if(rotation>1)
        return false;
        else {
            for(int i=index+1; i<n-1; i++) {
               if(nums[i]>nums[i+1])
               return false; 
            }
            if(nums[n-1]>nums[0])
            return false;
        }

        return true;
    }
};
