#include <iostream>
using namespace std;

void SelectionSort(int arr[], int size){
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){   //Here you can create minIndex var and store that, just updating that min index find min value from remaining array. By this approach you need to only swap element once.
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Sorted Array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return;

}

int main(){
    int arr[] = {20,15,30,39,9,3,12,34};
    int size = sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,size);

    return 0;
}