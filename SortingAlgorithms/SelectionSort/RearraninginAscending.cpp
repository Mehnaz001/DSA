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

    //Rearranging array in ascending order
    for(int i=0;i<n-1;i++)
    { int index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[index])
            index=j;
        }
        swap(arr[i],arr[index]);
    }

    //Printing sorted array  
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}