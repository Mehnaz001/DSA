#include<iostream>
using namespace std;

//Function to print array
void print(int arr[], int index, int n) {
    if(index==n)
    return;

    cout<<arr[index];
    print(arr, index+1);
}

//Function to print array in reverse - 8 2 6 7 3
void reverse(int arr[], int index, int n) {
    if(index==n)
    return;

    print(arr, index+1, n);
    cout<<arr[index];
}

//With only 2 parametrs
void print(int arr[], int index) {
    if(index==-1)
    return;

    print(arr,index-1);
    cout<<arr[index];
}
int main() {
    int arr[]= {3,7,6,2,8};
    print(arr, 0, 5);
    print(arr,0);
    reverse(arr, 0, 5);
}