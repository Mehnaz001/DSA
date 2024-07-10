#include<iostream>
using namespace std;

void printeven(int num, int N)
{
    if(num>N)
    return;

    cout<<num;
    printeven(num+2,N);
}

void printeven(int N)
{   if(N==2)
    {
        cout<<2;
        return;
    }
    printeven(N-2);
    cout<<N;
}
int main()
{
    int N;
    cin>>N;

    printeven(2,N);//Two arguments

    if(N%2!=0)
    N--;
    printeven(N);//passing only 1 argument
}