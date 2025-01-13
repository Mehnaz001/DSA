class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        unordered_map<char,int>freq;
        for(auto &c: s) {
            freq[c]++;
        }
        int delete_count = 0;
        for(auto &pair: freq) {
            int freq_char = pair.second;
            //if freq is odd we can delete all characters except 1
            if(freq_char%2==1) {
                delete_count += freq_char-1;
            }
            // if even can delete all except 2
            else {
                delete_count += freq_char - 2;
            }
        }

        return n - delete_count; //return size  by subtracting the number of characters to delete
    }
};
