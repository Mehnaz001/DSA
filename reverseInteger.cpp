#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    int reversenum=0;
    while(num!=0){
        int digit=num%10;
        reversenum=reversenum*10+digit;
        num/=10;
    }

    cout<<"Reverse number = "<<reversenum;
}