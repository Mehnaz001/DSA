//Capacity to ship packages within D days
/* A conveyor belt has packages that must be shipped from one port to another within days days.

The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by weights). We may not load more weight than the maximum weight capacity of the ship.

Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.*/

int shipWithinDays(vector<int>& weights, int days) {
        int start=0,end=0,mid,ans,n=weights.size();
        for(int i=0;i<n;i++){
            start=max(start,weights[i]);
            end+=weights[i];
        }

        while(start<=end)
        {
            mid=start+(end-start)/2;
            int wgt=0,count=1;
            for(int i=0;i<n;i++)
            {
                wgt+=weights[i];
                if(wgt>mid){
                    count++;
                    wgt=weights[i];
                }
            }

            if(count<=days){
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;

        }
        return ans;
    }