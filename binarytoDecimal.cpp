#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int binary;
    cout<<"Enter binary number: ";
    cin>>binary;

    int decimal=0,power=0;
    while(binary!=0){
        int rem=binary%10;
        decimal+=rem*pow(2,power);
        power++;
        binary/=10;
    }
    cout<<"Decimal representation of "<<binary<<" = "<<decimal;
}