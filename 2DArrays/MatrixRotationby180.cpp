//Matrix Rotation by 180 degree
/*Given a square matrix of size N X N, turn it by 180 degrees in anticlockwise direction without using extra memory.
 

Example 1:

Input: N = 4, 
matrix = {{1, 2, 3, 4}, 
          {5, 6, 7 ,8}, 
          {9, 10, 11, 12},
          {13, 14, 15, 16}}
Output: {{16, 15, 14, 13}, 
         {12, 11, 10, 9}, 
         {8, 7, 6, 5}, 
         {4, 3, 2, 1}}*/

         void rotate(vector<vector<int> >& matrix) {
        // Code here
         int n=matrix.size();

        
        //Reverse the coloumn
        for(int j=0; j<n; j++){
            int start=0, end= n-1;
            while(start<end){
                swap(matrix[start][j],matrix[end][j]);
                start++;
                end--;
            }
        }
         
        //Reverse the rows
        for(int i=0; i<n; i++){
            int start=0, end= n-1;
            while(start<end){
                swap(matrix[i][start],matrix[i][end]);
                start++;
                end--;
            }
        }
    }