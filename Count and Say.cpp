class Solution {
public:
    string RLE(string s) {
        string result = "";
        int i = 0;
        while(i<s.size()) {
            char current = s[i];
            int count = 1;
            while(i+1<s.size() && s[i+1]==current) {
                i++;
                count++;
            }
            result += to_string(count) + current;
            i++;
        }
        return result;
    }
    string countAndSay(int n) {
      if(n==1)
      return "1";

      string result = "1";
      for(int i=2; i<=n; i++) {
        result = RLE(result);
      }  
      return result;
    }
};
