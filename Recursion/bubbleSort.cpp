#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    //base condition
    if(size==1 || size==0){
        return ;
    }

    //processsing
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    // cout<<arr[size-1]<<endl;

    bubbleSort(arr,size-1);

}

int main() {
    int arr[] = {6,3,0,5};
    int size = 4;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"--------------------------------"<<endl;
    bubbleSort(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}