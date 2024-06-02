//Painter Partition Problem
/*Dilpreet wants to paint his dog's home that has n boards with different lengths. The length of ith board is given by arr[i] where arr[] is an array of n integers. He hired k painters for this work and each painter takes 1 unit time to paint 1 unit of the board. 

The problem is to find the minimum time to get this job done if all painters start together with the constraint that any painter will only paint continuous boards, say boards numbered {2,3,4} or only board {1} or nothing but not boards {2,4,5}.*/

long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        long long start=0,end=0,mid,ans;
        for(int i=0;i<n;i++){
            if(start<arr[i])
            start=arr[i];
            end+=arr[i];
        }
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
            int boards=0,painter=1;
            for(int i=0;i<n;i++){
                boards+=arr[i];
                if(boards>mid){
                    painter++;
                    boards=arr[i];
                }
            }
            
            if(painter<=k){
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return ans;
    }