//You are climbing a staircase. It takes n steps to reach the top.
//Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

//Recursive approach(but time limit exceeded)
int Totalways(int n) {
    if(n<=1)
    return;

    return Totalways(n-1) + Totalways(n-2);
}

//Iterative approach
class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)
        return n;

        int s1 = 1;
        int s2 = 2;

        for(int i=3; i<=n; i++)
        {
            int temp = s1 + s2;
            s1 = s2;
            s2 = temp;
        }

        return s2;
    }
};