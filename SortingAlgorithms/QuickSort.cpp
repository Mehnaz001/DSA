#include <iostream>
using namespace std;

int partition(int arr[],int start, int end) {
    int pos = start;
    for(int i= start; i<=end; i++) {
        if(arr[i]<=arr[end]) {
            swap(arr[i],arr[pos]);
            pos++;
        }
    }

    return pos-1;
}

void quickSort(int arr[], int start, int end) {
    if(start>=end)
    return;

    //Find pivot element correct position
    int pivot = partition(arr,start,end);

    quickSort(arr,start,pivot-1); //Left side
    quickSort(arr,pivot+1,end);//Right side
}
int main() {
    int arr[] = {2,8,9,5,6,7,8,9};
    quickSort(arr,0,7);

    for(int i = 0; i<8; i++) {
        cout<<arr[i]<<" ";
    }
} 