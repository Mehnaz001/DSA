class Solution {
public:
    void generateHappyStrings(int n,int k, string &currentString, int &index, string &result) {
        if(currentString.size()==n) {
            index++;
            if(index==k)
            result = currentString;
            return;
        }

        for(char ch = 'a'; ch<='c'; ch++) {
            if(currentString.size()>0 && currentString.back()==ch)
            continue;
            currentString += ch;
            generateHappyStrings(n, k,currentString,index,result);

            if(result!="")
            return;

            currentString.pop_back();
        }
    }
    string getHappyString(int n, int k) {
        string currentString = "";
        string result = "";
        int index = 0;
        generateHappyStrings(n,k,currentString,index,result);
        return result;
    }
};
