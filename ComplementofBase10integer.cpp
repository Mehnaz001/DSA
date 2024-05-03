#include<iostream>
using namespace std;

int complement(int n){
    if(n==0)
    return 1;

    int ans=0,mul=1;
    while(n){
        int rem=n%2;
        rem=rem^1;
        n/=2;
        ans=ans+rem*mul;
        mul*=2;
    }
    return ans;
}

int main()
{   int num;
    cout<<"Enter number: ";
    cin>>num;

    int ans=complement(num);
    cout<<ans;
}