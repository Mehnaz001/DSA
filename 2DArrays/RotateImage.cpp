//Rotate Image
/*You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

 Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]
 */

 void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();

        //Transpose the coloumn into rows
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++)
            swap(matrix[i][j],matrix[j][i]);
        }
        //Reverse the elements
        for(int i=0; i<n; i++){
            int start=0, end= n-1;
            while(start<end){
                swap(matrix[i][start],matrix[i][end]);
                start++;
                end--;
            }
        }

    }