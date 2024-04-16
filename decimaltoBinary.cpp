#include<iostream>
using namespace std;
int main(){
    int decimal;
    cout<<"Enter number: ";
    cin>>decimal;

    int rem,binaryNumber=0,mul=1;
    while(decimal!=0){
        int rem=decimal%2;
        binaryNumber=rem*mul+binaryNumber;
        mul*=10;
        decimal/=2;
    }
    cout<<"Binary representation: "<<binaryNumber;
}