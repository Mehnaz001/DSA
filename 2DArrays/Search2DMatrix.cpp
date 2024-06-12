// Search in a 2D Matrix
/*You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

 Example 1:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
*/

 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int start=0,end=n*m-1;

        while(start<=end) //Binary Search
        {
            int mid=start+(end-start)/2;
            int row_index=mid/m;
            int col_index = mid % m;

            if(matrix[row_index][col_index]==target)
            return 1;
            else if(matrix[row_index][col_index]<target)
            start = mid+1;
            else
            end = mid -1;
        }
        return 0;
    }