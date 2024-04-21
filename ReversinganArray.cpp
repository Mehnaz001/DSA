#include<iostream>
using namespace std;
int main(){
    int arr[50];
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter array elements : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int start=0,end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"Reverse of array: ";
    for(int i=0;i<size;i++){
     cout<<arr[i]<<" ";
    }
}