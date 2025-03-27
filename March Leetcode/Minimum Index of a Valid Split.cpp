class Solution {
public:
    int minimumIndex(vector<int>& nums) {
      //Find the majority element - Moore Algorithm
      int x = nums[0]; //Candidate
      int count = 0; //Vote
      for(auto& num: nums) {
        if(num==x)
        count++;
        else
        count--;

        if(count==0) {
            x = num;
            count = 1;
        }
      }
      // Frequency Count of majority element
      int xfreq = 0;
      for(auto& num: nums) {
        if(num==x)
        xfreq++;
      }

      //Checking for Valid Split
      count = 0;
      int n = nums.size();
      for(int i=0; i<n; i++) {
        if(nums[i]==x)
        count++;

        int rem = xfreq - count;
        if(count*2 > i+1 && rem*2 > n-i-1)
        return i;
      }

      return -1;
    }
};
