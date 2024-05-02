#include<iostream>
using namespace std;

int main(){
    bool isPrime=1;
    int number;
    cout<<"Enter a number: ";
    cin>>number;

    for(int i=2; i<=number; i++){
        if(number%i==0){
            isPrime=0;
            break;
        }
    }

    if(isPrime==0){
        cout<<"Not a prime number.";
    }
    else{
        cout<<"Prime number.";
    }
}