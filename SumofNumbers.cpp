#include<iostream>
using namespace std;

int main(){
    int number,sum;
    cout<<"Enter maximum number to print sum of natural numbers: ";
    cin>>number;

    for(int i=1; i<=number; i++){
        sum+=i;
    }

    cout<<"Sum is "<<sum;

    return 0;
}