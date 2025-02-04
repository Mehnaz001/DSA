class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
    int n = nums.size();
    int maxSum = 0;
    int currentSum = nums[0];
    
    for(int i=1; i<n; i++) {
        if(nums[i]<=nums[i-1]) {
            maxSum = max(maxSum, currentSum);
            currentSum = 0;
        }
        currentSum += nums[i];
    }

    return max(maxSum,currentSum);

    }
};
