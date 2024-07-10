#include<iostream>
using namespace std;

void print(int num, int n)//With two arguments
{
    if(num==n)
    {
        cout<<num;
        return;
    }
    cout<<num;
    print(num+1,n);
}

void print1(int n)//With 1 argument
{
    if(n==1)
    {
        cout<<1;
        return;
    }

    print1(n-1);
    cout<<n;
}
int main()
{
    int n;
    cin>>n;

    print(1,n);

    print1(n);
}