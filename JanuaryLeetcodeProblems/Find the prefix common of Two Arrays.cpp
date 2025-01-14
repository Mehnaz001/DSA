class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int>ans(n);
        unordered_set<int> elem_A, elem_B;

        for(int i=0; i<n; i++) {
            elem_A.insert(A[i]);
            elem_B.insert(B[i]);

            int count = 0;
            for(int element : elem_A) {
                if(elem_B.count(element))  {
                    count++;
                }
            }
            ans[i] = count;
        }

        return ans;
    }
};
