#include<iostream>
using namespace std;

int sqSum(int n)
{   
    if(n==1)
    return 1;

    return n*n+ sqSum(n-1);
}
int main()
{
    int n;
    cin>>n;

    cout<<sqSum(n);
}