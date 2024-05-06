#include<iostream>
using namespace std;
int maxArray(int arr[],int size){
    int max=INT16_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
 int arr[5]={2,6,4,3,8};
 int largest=maxArray(arr,5);
 cout<<largest;
 
}