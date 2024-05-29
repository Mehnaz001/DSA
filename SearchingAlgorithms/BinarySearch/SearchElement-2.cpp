#include<iostream>
using namespace std;
//If given array is sorted in descending order

int binarySearch(int arr[],int n,int key)
{
    int start=0,end=n-1,mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]<key)
        end=mid-1;
        else
        start=mid+1;
    }
    
    return -1;
}

int main(){
    int arr[1000];
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key: ";
    cin>>key;

    cout<<binarySearch(arr,n,key);
    return 0;
}