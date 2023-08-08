#include <iostream>
using namespace std;

int main(){
    int arr[] = {3,4,7,9,10,12};
    // int arr2[] = {1,2,4,6,11,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n;
    if(size%2==0){
        n = size-1;
    }
    else{
        n = size-2;
    }

    //swapping elements of array
    int temp;
    for(int i=0;i<n;i=i+2){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]= temp;
    }
    // Printing array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
