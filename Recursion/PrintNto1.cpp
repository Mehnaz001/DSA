#include<iostream>
using namespace std;

void print(int n)
{   if(n==1)
    { cout<<1;
      return;
    }
    print(n-1);
    cout<<n<<endl;
}

int main()
{
    int n;
    cin>>n;

    print(n);
}