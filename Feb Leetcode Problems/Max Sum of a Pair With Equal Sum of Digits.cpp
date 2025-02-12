class Solution {
public:
    int calculateSum(int num) {
        int sum = 0;
        while(num>0) {
            sum += num%10;
            num/=10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
       vector<pair<int,int>> digitSumPairs;

       for(int number : nums) {
        int sum = calculateSum(number);
        digitSumPairs.push_back({sum,number});
       } 

       sort(digitSumPairs.begin(),digitSumPairs.end());

       int maxSum = -1;
       for(int i=1; i<digitSumPairs.size(); i++) {
        int current = digitSumPairs[i].first;
        int previous = digitSumPairs[i-1].first;

        if(current == previous) {
            int pairSum = digitSumPairs[i].second + digitSumPairs[i-1].second;
            maxSum = max(pairSum,maxSum);
        }
       }
       return maxSum;
    }
};
