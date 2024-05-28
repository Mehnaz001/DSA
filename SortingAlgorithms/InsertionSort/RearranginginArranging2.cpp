#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //Rearranging elements from last element
    for(int i=n-1;i>0;i--){
        for(int j=i-1;j<n-1;j++){
            if(arr[j]>arr[j-1])
            swap(arr[j],arr[j-1]);
            else
            break;
        }
    } //Space complexity: O(1)
    //Time complexity:Worst case-O(n^2),Best Case-O(n),Average case-O(n^2)

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}