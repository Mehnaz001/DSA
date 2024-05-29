//sqrt(x)

/*Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
You must not use any built-in exponent function or operator.*/

class Solution {
public:
    int mySqrt(int x) {
        if(x<2)
        return x;
        int start=0,end=x,mid,ans;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(mid==x/mid){
                return mid;
            }
            else if(mid<x/mid){
                ans=mid;
                start=mid+1;
            }
            else
            end=mid-1;
        }
        return ans;
    }
};