/*Given a set of m distinct positive integers and a value ‘N’. Count the total number of ways we can form ‘N’ by  adding the array elements. Repetitions and different arrangements are allowed.
Note: Answer can be quite large output the answer modulo 109+7.*/

int way(int arr[],int m, int sum) {
        if(sum==0)
        return 1;
        
        if(sum<0)
        return 0;
        
        int ans = 0;
        for(int i=0; i<m; i++) {
            ans+=way(arr,m,sum-arr[i]);
        }
        
        return ans;
    }
    // number of ways to sum up to 'N' 
    int countWays(int arr[], int m, int N) 
    { 
      return way(arr, m,N);
    } 