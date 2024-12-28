/*Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

Example 1:
Input: nums = [1,1,2]
Output:
[[1,1,2],
 [1,2,1],
 [2,1,1]]

Example 2:
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]*/

class Solution {
public:

    void permut(vector<int>&nums,vector<vector<int>>&ans,int index) {
        if(index==nums.size()) {
            ans.push_back(nums);
            return;
        }
        vector<bool>use(21,0);
        for(int i=index; i<nums.size(); i++) {
            if(use[nums[i]+10]==0) {
                swap( nums[index] , nums[i]);
                permut(nums,ans,index+1);
                swap(nums[index],nums[i]);
                use[nums[i]+10]=1;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       vector<vector<int>>ans;
       permut(nums,ans,0);

       return ans; 
    }
};