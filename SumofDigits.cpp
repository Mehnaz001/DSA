//Subtract the product and sum of the digits of an integer
#include<iostream>
using namespace std;

int main(){
    int product=1,sum=0;
    int n;
    cout<<"Enter number: ";
    cin>>n;
    while(n){
        product=product*(n%10);
        sum=sum+(n%10);
        n=n/10;
    }
    cout<<"product= "<<product;
    cout<<"sum = "<<sum;
    cout<<"product-sum = "<<product-sum;
}