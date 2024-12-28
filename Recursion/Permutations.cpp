/*Given an array nums of distinct integers, return all the possible 
permutations
. You can return the answer in any order.*/

class Solution {
public:

    void permut(vector<int>&nums,vector<vector<int>>&ans,int index) {
        if(index==nums.size()) {
            ans.push_back(nums);
            return;
        }

        for(int i=index; i<nums.size(); i++) {
            swap(nums[i],nums[index]);
            permut(nums,ans,index+1);
            swap(nums[i],nums[index]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        permut(nums,ans,0);
        return ans;
    }
};