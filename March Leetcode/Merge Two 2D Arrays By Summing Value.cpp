class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>>result;
        int first = 0, second = 0;
        //using two pinter approach
        while( first<nums1.size() && second<nums2.size()) {
            if(nums1[first][0] == nums2[second][0]) {
               result.push_back({nums1[first][0], nums1[first][1] + nums2[second][1]});
               first++,second++;
            }
            else if(nums1[first][0] < nums2[second][0]) {
                result.push_back({nums1[first][0],nums1[first][1]});
                first++;
            }
            else {
                result.push_back({nums2[second][0],nums2[second][1]});
                second++;
            }
        }
        //if elements left in nums1 array
        while(first<nums1.size()) {
            result.push_back({nums1[first][0],nums1[first][1]});
            first++;
        }
       //if elements left in nums2 array
         while(second<nums2.size()) {
            result.push_back({nums2[second][0],nums2[second][1]});
            second++;
        }
        return result;
    }
};
