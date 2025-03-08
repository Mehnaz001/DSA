class Solution {
public:
    int minimumRecolors(string blocks, int k) {
      int left = 0, whites = 0, reColor = INT_MAX;
      for(int right = 0; right < blocks.size(); right++) {
        if(blocks[right]=='W') {
            whites++;
        }
        // k consecutive elements are found
        if(right - left + 1 == k) {
            reColor = min(reColor,whites);
            if(blocks[left]=='W')
            whites--;
            left++;
        }
      }

      return reColor;
    }
};
