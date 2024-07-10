#include<iostream>
using namespace std;

int Fact(int n)
{   if(n==1||n==0)
    return 1;
    return n*Fact(n-1);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<Fact(n);
}