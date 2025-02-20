class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans = "";
        for (int i = 0; i < nums.size(); i++) {
            char digit = nums[i][i];
            if (digit == '1') {
                ans += '0';
            } else {
                ans += '1';
            }
        }
        return ans;
    }
};
