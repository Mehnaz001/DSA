#include<iostream>
using namespace std;
//Function to check whether the number is power of two or not
bool isPowerofTwo(int n){
    if(n<1)
    return 0;
    while(n!=1){
        if (n%2==1)
        {
            return 0;
        }
        n=n/2;
        return 1;
    }
}

int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;

    bool ans=isPowerofTwo(number);
    if(ans==1){
        cout<<"Power of two";
    }
    else{
        cout<<"Not power of two";
    }
}