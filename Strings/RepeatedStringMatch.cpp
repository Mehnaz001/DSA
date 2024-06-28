//Repeated String Match
/*Given two strings a and b, return the minimum number of times you should repeat string a so that string b is a substring of it. If it is impossible for b​​​​​​ to be a substring of a after repeating it, return -1.

Notice: string "abc" repeated 0 times is "", repeated 1 time is "abc" and repeated 2 times is "abcabc".

Example 1:

Input: a = "abcd", b = "cdabcdab"
Output: 3
Explanation: We return 3 because by repeating a three times "abcdabcdabcd", b is a substring of it.

Example 2:

Input: a = "a", b = "aa"
Output: 2*/


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
//KMP Search Function
int KMP_Match( string temp, string b)
{
    vector<int>lps(b.size(),0);
       lpsFind(lps,b);
       int first=0, second=0;
       while(second<b.size() && first<temp.size())
       {
        if(b[second]==temp[first]){
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
       if(second==b.size())
       return 1;

       return 0;
    }


    int repeatedStringMatch(string a, string b) {

       if(a==b)
       return 1;

       int repeat=1;
       string temp=a;

       while(temp.size()<b.size())
       {
        temp+=a;
        repeat++;
       }

       //KMP Search
       if(KMP_Match(temp,b)==1)
       return repeat;

       //temp+a, KMP search
       if(KMP_Match(temp+a,b)==1)
       return repeat+1;

       return -1;
    }
};