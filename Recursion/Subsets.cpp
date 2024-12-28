/*Given an integer array nums of unique elements, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.*/

class Solution {
public:

    void subseq(vector<int>& nums,int index, int n, vector<vector<int>> &ans, vector<int>temp) {
        if(index==n) {
            ans.push_back(temp);
            return;
        }
        //Not included
        subseq(nums, index+1,n,ans,temp);
        //Included
        temp.push_back(nums[index]);
        subseq(nums,index+1, n, ans, temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;

        subseq(nums,0,nums.size(),ans,temp);

        return ans;
    }
};

