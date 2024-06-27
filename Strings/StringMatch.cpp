//Find Index of First Occurence in a String
/*Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.*/

class Solution {
public:
//Function to Find LPS
void lpsFind(vector<int>&lps,string s)
{
    int prefix=0, suffix=1;
    while(suffix < s.size()){
        if(s[prefix]==s[suffix]){
            lps[suffix]=prefix+1;
            prefix++, suffix++;
        }
        else
        {
            if(prefix==0){
                lps[suffix]=0;
                suffix++;
            }
            else{
                prefix=lps[prefix-1];
            }
        }
    }
}

    int strStr(string haystack, string needle) {
       vector<int>lps(needle.size(),0);
       lpsFind(lps,needle);
       int first=0, second=0;//First is pointing to haystack and second is pointing to needle
       while(second<needle.size() && first<haystack.size())
       {
        if(needle[second]==haystack[first]){
            first++, second++;
        }
        else
        {
            if(second==0)
            first++;
            else{
                second=lps[second-1];
            }
        }
       }
       if(second==needle.size())
       return first-second;

       return -1;
    }
};