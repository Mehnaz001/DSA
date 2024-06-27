//Longest Prefix Suffix
/*Given a string of characters, find the length of the longest proper prefix which is also a proper suffix.

NOTE: Prefix and suffix can be overlapping but they should not be equal to the entire string.

Example 1:

Input: s = "abab"
Output: 2
Explanation: "ab" is the longest proper 
prefix and suffix. */


//Brute Force
class Solution{
  public:		
	int lps(string s) {
	    // Your code goes here
	   int n = s.size()-1;
	   string prefix;
	   int ans = 0;
	   for(int i=0; i<n; i++){
	       prefix+=s[i];
	       string suffix;
	       for(int j=n-i; j<=n; j++){
	           suffix+=s[j];
	       }
	       if(prefix==suffix)
	       {
	           if(prefix.size()>ans)
	           ans=prefix.size();
	       }
	   }
	   return ans;
	}
};

//Optimized Approach Using KMP Algorithm
class Solution{
  public:		
	int lps(string s) {
	   vector<int>lps(s.size(),0);
	   int pre=0, suff=1;
	   while(suff<s.size())
	   {    //if prefix==suffix
	       if(s[pre]==s[suff]){
	           lps[suff]=pre+1;	       
	           pre++,suff++;
	       }
	       //if prefix is not equal to zero
	       else
	       {
	           if(pre==0){
	               lps[suff]=0;//if prefix is 0 it means lps will also be zero
	               suff++;
	           }
	           else{
	              pre=lps[pre-1]; 
	           }
	       }
	   }
	   return lps[s.size()-1];
	}
};