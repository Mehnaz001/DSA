class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int>ans(n,0);
        int leftballs = 0, rightballs=0;
        int movestoLeft = 0, movestoRight = 0;
       for(int i=0; i<n; i++) {
        //left part
        ans[i] += movestoLeft;
        leftballs += boxes[i]-'0';
        movestoLeft += leftballs;

        //right part
        int j= n-1-i;
        ans[j]+=movestoRight;
        rightballs += boxes[j]-'0';
        movestoRight += rightballs;

       }
       return ans;
    }
};
