#include<iostream>
using namespace std;

//Function to get second largest value
int print2largest(int arr[],int n)
{   int ans=INT32_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    int second=INT32_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=ans)
        second=max(second,arr[i]);
    }
    return second;
}
int main(){
    int arr[6]={2,6,4,3,8};
    int ans=print2largest(arr,6);
    cout<<ans;
}