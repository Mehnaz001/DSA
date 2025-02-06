class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        vector<int>pairProducts;
        int tuples = 0;

        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                pairProducts.push_back(nums[i]*nums[j]);
            }
        }

        sort(pairProducts.begin(),pairProducts.end());

        int lastSeen = -1;
        int same = 0;

        for(int i=0; i<pairProducts.size(); i++) {
            if(pairProducts[i]==lastSeen) {
                same++;
            }
            else {
                int pairs = (same-1) * same/2;
                tuples += 8* pairs;

                lastSeen = pairProducts[i];
                same = 1;
            }
        }

        int pairs = (same-1) * same/2;
        tuples += 8* pairs;

        return tuples;
    }
};
