//Longest Substring Without Repeating Characters
/*Given a string s, find the length of the longest 
substring
 without repeating characters.

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool>count(256,0);
        int first=0, second=0, len=0;
        while(second<s.size())
        {
            while(count[s[second]])
            {
                count[s[first]]=0;
                first++;
            }
            count[s[second]]=1;
            len=max(len,second-first+1);
            second++;
        }
        return len;
    }
};