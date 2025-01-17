class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int ans = derived[0];
        for(int i=1; i<derived.size(); i++) {
            ans = ans^derived[i];
        }
        if(ans==0)
        return true;
        else
        return false;
    }
};
