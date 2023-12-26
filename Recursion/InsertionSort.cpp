#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){ //without recursion
    for(int i=1;i<size;i++){
        int temp = arr[i];
        for(int j=i-1;j>=0;j--){
            if(temp<arr[j]){
                arr[j+1]=arr[j];
                if(j==0){
                    arr[j]=temp;
                    break;
                }
            }
            else{
                arr[j+1]=temp;
                break;
            }
        }
    }
}

void insertionSortR(int arr[], int size){ //using recursion 
    //base condition
}

int main() {
    int arr[] = {4, 3, 6, 11 , 0, 8, 2, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<size<<endl;
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    insertionSort(arr,size);
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}