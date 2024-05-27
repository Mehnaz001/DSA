#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int index=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[index])
        index=i;
        
    }
    cout<<"Index of Smallest element "<<arr[index]<<" = "<<index;
    
}