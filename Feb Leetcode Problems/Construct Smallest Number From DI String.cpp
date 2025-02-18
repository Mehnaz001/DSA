class Solution {
public:
    int buildSequence(int index, int count, string pattern, string &result) {
        if(index!=pattern.size()) {
            if(pattern[index]=='I')
            buildSequence(index+1,index+1,pattern,result);
            else
            count = buildSequence(index+1,count,pattern,result);
        }
        result+= to_string(count+1);

        return count+1;
    }
    string smallestNumber(string pattern) {
        string result = "";

        buildSequence(0,0,pattern,result);
        reverse(result.begin(),result.end());
        return result;
    }
};
