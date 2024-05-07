#include<iostream>
using namespace std;
//find unique element in array(2m+1)
int findunique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
    
}

int main(){
    int arr[50];int size;
    cout<<"enter size of array: "<<endl;
    cin>>size;
    cout<<"Enter elements of array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int unique=findunique(arr,size);
    cout<<"Unique number = "<<unique;
}