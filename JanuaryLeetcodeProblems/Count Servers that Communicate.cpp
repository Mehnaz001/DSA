class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        vector<int>row_count(col,0); //For counting servers in row
        vector<int>col_count(row,0); //For counting servers in col

        //Counting Servers
        for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
                if(grid[i][j]==1) {
                    row_count[j]++;
                    col_count[i]++;
                }
            }
        }

        int comm_server = 0; //communicable servers count
        for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
                if(grid[i][j]) {
                    if(row_count[j]>1 || col_count[i]>1) //if there are more than 1 server in same row increase server count
                    comm_server++;
                }
            }
        }

        return comm_server;
    }
};
