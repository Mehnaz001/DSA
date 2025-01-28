class Solution {
public:
    int getFishCount(int r, int c, vector<vector<int>>& grid, vector<vector<bool>>& visited, const vector<pair<int, int>>& directions) {
    stack<pair<int, int>> s;
    s.push({r, c});
    visited[r][c] = true;
    int totalFish = grid[r][c];

    while (!s.empty()) {
        auto [x, y] = s.top();
        s.pop();
        
        // Explore all 4 adjacent cells (up, down, left, right)
        for (const auto& dir : directions) {
            int newX = x + dir.first;
            int newY = y + dir.second;
             // Check bounds and if the cell is water and unvisited
            if (newX >= 0 && newX < grid.size() && newY >= 0 && newY < grid[0].size() && !visited[newX][newY] && grid[newX][newY] > 0) {
                visited[newX][newY] = true;
                totalFish += grid[newX][newY];
                s.push({newX, newY});
            }
        }
    }
    
    return totalFish;
}
            
    int findMaxFish(vector<vector<int>>& grid) {
         int m = grid.size();
    int n = grid[0].size();
    
    // Directions for movement: up, down, left, right (row, column offsets)
    vector<pair<int, int>> directions = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
    
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    
    int maxFish = 0;

    // Iterate over every cell in the grid
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] > 0 && !visited[i][j]) {
                 // For each unvisited water cell, calculate the fish in its connected region
                maxFish = max(maxFish, getFishCount(i, j, grid, visited, directions));
            }
        }
    }
    
    return maxFish;
}
    
};
