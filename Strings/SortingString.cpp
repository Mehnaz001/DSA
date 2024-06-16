//Sort a String
/*Given a string consisting of lowercase letters, arrange all its letters in ascending order. 

Example 1:

Input:
S = "edcab"
Output: "abcde"
Explanation: characters are in ascending
order in "abcde".*/

string sort(string s){
    //complete the function here
    vector<int>alpha(26,0);
    for(int i=0; i<s.size(); i++)
    {
        alpha[s[i]-'a']++;
        
    }
    
    string ans;
    for(int i=0 ;i<26; i++)
    {
        char ch = 'a'+i;
        while(alpha[i])
        {
            ans+=ch;
            alpha[i]--;
        }
    }
    
    return ans;
    
}