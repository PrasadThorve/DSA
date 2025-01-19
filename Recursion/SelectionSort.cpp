#include<iostream>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        int min = 99999;
        int index = -1;
        for(int j=i;j<size;j++){
            if(arr[j]<min){
                min=arr[j];
                index = j;
            }
        }
        swap(arr[i],arr[index]);


        for(int i = 0; i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<endl;
    }
}

int main() {
    int arr[] = {64,25, 12, 22, 11};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<size;i++){
            cout<<arr[i]<<" ";
        }
    cout<<endl<<endl;

    cout<<"start"<<endl;
    selectionSort(arr,size);
    cout<<"end"<<endl;
    return 0;
}