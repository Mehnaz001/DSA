//Add minimum char at start to make a string Palindrome
/*Given string str of length N. The task is to find the minimum characters to be added at the front to make string palindrome.
Note: A palindrome is a word which reads the same backward as forward. Example: "madam".

Example 1:

Input:
S = "abc"
Output: 2
Explanation: 
Add 'b' and 'c' at front of above string to make it
palindrome : "cbabc"*/

int minChar(string str){
     string rev = str;
     reverse( rev.begin(), rev.end());//Reverse
     int size=str.size();
     str += '$'; //Separator
     str += rev; // Add Reversed String
     
     //LOngest Prefix
     int n = str.size();
     vector<int>lps(n,0);
     int pre=0, suff=1;
     while(suff<n)
     {
         if(str[pre] == str[suff]){
             lps[suff]=pre+1;
             pre++ , suff++;
         }
         else{
             if(pre==0){
               suff++;  
            }
            else{
                pre=lps[pre-1];
            }
         }
     }
     
     return size-(lps[n-1]);
    }