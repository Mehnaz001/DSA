class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
       int first = 0, second = 0 , diff = 0;
       for(int i=0; i<s1.size(); i++) {
        if( s1[i] != s2[i] ) {
            diff++;

            if( diff > 2 )
            return false;
            else if( diff == 1)
            first = i;
            else
            second = i;

            }
        } 

       return s1[first]==s2[second] && s1[second]==s2[first];
    }
};
