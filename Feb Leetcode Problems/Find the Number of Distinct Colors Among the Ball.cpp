class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
       int n = queries.size();
       vector<int>result(n); 
       unordered_map<int,int> colorMap, ballMap;

       for(int i=0; i<n; i++) {
        int ball = queries[i][0];
        int color = queries[i][1];

        //if ball is already colored
        if(ballMap.find(ball)!=ballMap.end()) {
            int prevColor = ballMap[ball];
            colorMap[prevColor]--;

            if(colorMap[prevColor] == 0)
            colorMap.erase(prevColor);
        }

        //Uncolored ball
        ballMap[ball] = color;
        colorMap[color]++;

        result[i] = colorMap.size();
       }

       return result;
    }
};
