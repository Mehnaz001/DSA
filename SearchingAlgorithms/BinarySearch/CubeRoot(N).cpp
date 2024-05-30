// Cube Root Of a Number
//Given a number N, find the cube root of N.
// Time Complexity- O(Cube root of N)
int cubeRoot(int N) {
         if(N<=1)
        return N;
        int start=0,end=N,mid,ans;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if((long long )mid*mid*mid==N){
                return mid;
            }
            else if((long long )mid*mid*mid<N){
                ans=mid;
                start=mid+1;
            }
            else
            end=mid-1;
        }
        return ans;
    }