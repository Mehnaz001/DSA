class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int>nums(n*n+1);
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                nums[grid[i][j]]++;
            }
        }
        int repeated, missing;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i]==0)
            missing = i;
            if(nums[i]==2)
            repeated = i;
        }
        return {repeated,missing};
    }
};
