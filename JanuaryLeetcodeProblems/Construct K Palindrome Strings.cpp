class Solution {
public:
    bool canConstruct(string s, int k) {
    //if k >s we cannot formy any palindrome
        if(k>s.size())
        return false;
    //if k==string size we can form palindrome of every single character
        if(k==s.size())
        return true;

    unordered_map<char, int> freq_map;

    // Step 1: Count the frequency of each character
    for (char c : s) {
        freq_map[c]++;
    }

    // Step 2: Count the number of characters with odd frequencies
    int odd_count = 0;
    for (const auto& pair : freq_map) {
        if (pair.second % 2 != 0) {
            odd_count++;
        }
    }

    return odd_count <= k;  // We can form at most k palindromes if odd count <= k
    }
};
