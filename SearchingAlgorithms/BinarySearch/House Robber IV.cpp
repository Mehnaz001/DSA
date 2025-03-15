class Solution {
public:
    bool canSteal_K_houses(vector<int>nums, int k, int maxCapability) {
        int n = nums.size();
        int count = 0;
        int i = 0;
        
        while(i<n) {
            if(nums[i]<=maxCapability) {
                count++;
                i+=2;
            }
            else {
                i++;
            }

            if(count==k)
            return true;
        }
        return false;
    }
    int minCapability(vector<int>& nums, int k) {
      int start = INT_MAX;
      int end = INT_MIN;
      int result = end;
      
      for(int i=0; i<nums.size(); i++) {
        start = min(start,nums[i]);
        end = max(end,nums[i]);
      }

      while(start<=end) {
        int mid = start + (end-start)/2;

        if(canSteal_K_houses(nums, k, mid)) {
            result = mid;
            end = mid-1;
        }
        else {
            start = mid+1;
        }
      }

      return result;
    }
};
