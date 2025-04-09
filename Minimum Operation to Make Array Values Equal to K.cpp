class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
       unordered_set<int> numbers;
       for(int i=0; i<nums.size(); i++) {
        if(nums[i]<k)
        return -1;
        else if(nums[i]>k) {
            numbers.insert(nums[i]);
        }
       } 
       return numbers.size();
    }
};
