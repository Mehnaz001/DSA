class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long result = LLONG_MAX;
        long long top_sum = accumulate(grid[0].begin(), grid[0].end(), 0LL);  // Sum of the first row.
        long long bottom_sum = 0;  // Sum of the second row (initially 0).
        
        for (int i = 0; i < grid[0].size(); ++i) {
            // Step 1: Update the first row sum as Robot 1 progresses.
            top_sum -= grid[0][i];  // Robot 1 collects points from the first row.
            
            // Step 2: Compute the result by considering the maximum between Robot 1's remaining points and Robot 2's collected points.
            result = min(result, max(top_sum, bottom_sum));  // Find the minimum of the maximum points.
            
            // Step 3: Robot 2 collects points from the second row as it moves.
            bottom_sum += grid[1][i];
        }
        
        return result;  // Return the minimum of the maximum points collected by Robot 2.
    }
};
