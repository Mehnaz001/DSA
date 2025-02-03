class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
      int n = nums.size();
      int incre_length = 1, decr_length = 1;
      int max_length = 1;

      for (int i = 0; i < n-1; i++) {
        if ( nums[i+1] > nums[i] ) {
            incre_length++;
            decr_length = 1;
        }
        else if (nums[i+1] < nums[i] ) {
            decr_length++;
            incre_length = 1;
        }
        else {
            incre_length = 1;
            decr_length = 1;
        }

        max_length = max ( max_length, max(incre_length, decr_length));
      }
      return max_length;
    }
};
