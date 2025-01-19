#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    int temp;
    for(int j=n; j>0; j--){
        bool swapped = false;
        for(int i=0; i<j-1; i++){
            if(arr[i]>arr[i+1]){
                temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                swapped = true;
            }
        }
        if(swapped==false){
            break;
        }
    }
    cout<<"Sorted Array using Bubble Sort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[] = {6,2,8,4,10,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    return 0;
}