#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int start, int mid, int end) {
    vector<int>temp(end-start+1);

    int left = start, right = mid+1, index = 0;

    while(left<=mid && right<=end) {
        if(arr[left]<= arr[right]) {
            temp[index] = arr[left];
            index++, left++;
        }
        else {
            temp[index] = arr[right];
            index++, right++;
        }
    }

    //if elements left in left array
    while(left<=mid) {
        temp[index] = arr[left];
        index++,left++;
    }
    
    //if elements left in right array
    while(right<=end) {
        temp[index] = arr[right];
        index++,right++;
    }

    //Paste sorted elements in original array
    index = 0;
    while(start<=end) {
        arr[start] = temp[index];
        start++,index++;
    }
}

void mergeSort(int arr[],int start,int end) {
    if(start==end)
    return;

    int mid = start+(end-start)/2;

    //Left Part
    mergeSort(arr, start, mid);

    //Right part
    mergeSort(arr,mid+1,end);

    merge(arr,start,mid,end); // Merging

}


int main() {
    int arr[] = {2,8,9,5,6,7,8,9};
    mergeSort(arr,0,7);

    for(int i = 0; i<8; i++) {
        cout<<arr[i]<<" ";
    }
} 