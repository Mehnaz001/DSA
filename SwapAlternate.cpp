#include<iostream>
using namespace std;
void swapAlternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[50];int size;
    cout<<"enter size of array: "<<endl;
    cin>>size;
    cout<<"Enter elements of array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    swapAlternate(arr,size); //To Swap Alternate Array Elements
    printArray(arr,size); //To print array elements
}