#include<iostream>
using namespace std;

int minElement(int arr[], int index, int n) {
    if(index == n-1)
    return arr[index];

    return min(arr[index], minElement(arr, index+1, n));
}

int main() {
    int arr[] = {7,2,4,1,6};
    cout<<minElement(arr, 0, 5);
}