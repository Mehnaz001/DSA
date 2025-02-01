class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
        return true;

        bool ans = false;

        for(int i=0; i<n-1; i++) {
            //if even and even
            if(nums[i] %2==0 && nums[i+1]%2==0) {
               return false;
            }
            //if odd and odd
            else if(nums[i]%2!=0 && nums[i+1]%2!=0) {
                return false;
            }
            //even and odd or odd and even pair
            else {
                ans = true;
            }
        }

        return ans;
    }
};
