class Solution {
public:
    bool checkMatch(stack<char>st, string part, int n) {
         stack<char> temp = st;
        for (int i = n - 1; i >= 0; i--) {
            if (temp.top() != part[i]) {
                return false;
            }
            temp.pop();
        }
        return true;
    }
    string removeOccurrences(string s, string part) {
      stack<char>st;
      int n = s.size();
      int partLength = part.size();
      for(int i=0; i<n; i++) {
        st.push(s[i]);
        if(st.size() >= partLength && checkMatch(st,part,partLength)) {
            for(int j=0; j<partLength; j++) 
            st.pop();
        }
      }  
      string result = "";
      while(!st.empty()) {
        result = st.top() + result;
        st.pop();
      }

      return result;
    }
};
