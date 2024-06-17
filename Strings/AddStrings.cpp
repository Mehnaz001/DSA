//Add Strings
/*Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

 Example 1:

Input: num1 = "11", num2 = "123"
Output: "134"

Example 2:

Input: num1 = "456", num2 = "77"
Output: "533"*/

class Solution {
public:
string add( string num1,string num2)
{
    int index1=num1.size()-1;
    int index2=num2.size()-1;
    string ans;
    int carry=0,sum=0;
    while(index2>=0)
    {
        sum=(num1[index1]-'0')+(num2[index2]-'0')+carry;
        carry=sum/10;
        char c = '0'+sum%10;
        ans+=c;
        index1--,index2--;
    }
    while(index1>=0)
    {
        sum=(num1[index1]-'0')+carry;
        carry=sum/10;
        char c = '0'+sum%10;
        ans+=c;
        index1--;
    }
    if(carry){
        ans+='1';
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
    string addStrings(string num1, string num2) {
        if(num1.size()>num2.size())
        return add(num1,num2);
        else
        return add(num2,num1);
    }
};