class Solution {
public:
    bool checkSymmetric(string s) {
       if(s.size()%2 != 0)
       return false;

       int mid = s.size()/2;
       int sum1 = 0, sum2 = 0;
       for(int i=0; i<mid; i++) {
        sum1 += s[i] -'0';
       } 
       for(int i=mid; i<s.size(); i++) {
        sum2 += s[i] -'0';
       }
       if(sum1==sum2)
       return true;

       return false;
    }
    int countSymmetricIntegers(int low, int high) {
        int ans = 0; 
        for(int i=low; i<=high; i++) {
            string s = to_string(i);
           if(checkSymmetric(s))
           ans++;
        }

        return ans;
    }
};
