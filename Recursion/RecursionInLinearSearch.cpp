#include<iostream>
using namespace std;

bool LS(int arr[],int index,int N,int X) {
    //Base condition
    if(index==N)
    return 0;

    //Target found
    if(arr[index]==X)
    return 1;

    return(arr,index+1,N,X);
}
int main() {
    int arr[] = {2,4,6,3};
    cout<<LS(arr,0,4,4);
}