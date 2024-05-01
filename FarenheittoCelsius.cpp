#include<iostream>
using namespace std;

int main(){
    float farenheit,celsius;
    cout<<"Enter Farenheit: ";
    cin>>farenheit;

    celsius=(5/9)*(farenheit-32);
    cout<<"Celsius is "<<celsius;
}