//Factorial of Large Numbers
/*Given an integer N, find its factorial. return a list of integers denoting the digits that make up the factorial of N.

Example 1:

Input: N = 5
Output: [1,2,0]
Explanation : 5! = 1*2*3*4*5 = 120*/

 vector<int> factorial(int N){
        vector<int>ans(1,1);
        while(N>1)
        {
            int carry =0, result, size = ans.size();
            for(int i=0; i<size; i++){
                result = ans[i]*N + carry;
                carry=result/10;
                ans[i]=result%10;
            }
            while(carry){
                ans.push_back(carry%10);
                carry/=10;
            }
            N--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
 }