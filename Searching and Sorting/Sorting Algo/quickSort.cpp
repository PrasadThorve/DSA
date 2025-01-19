#include<iostream>
using namespace std;

void partition(int arr[], int start, int end, int pivot){
    int index1 = start;
    int index2 = pivot+1;
    while(index1<pivot && index2<=end){

        if(arr[index1]<arr[pivot]){
            index1++;
        }

        if(arr[index2]>arr[pivot]){
            index2++;
        }

        if(arr[index1]>arr[pivot] && arr[index2]<arr[pivot]){
            swap(arr[index1],arr[index2]);
            index1++;index2++;
        }     
    }

}

void quickSort(int arr[],int start, int end){
    //base condition
    if(start>=end){
        return;
    }

    int cnt=0;
    for(int i=start+1;i<=end;i++){
        if(arr[i]<arr[start]){
            cnt++;
        }
    }
    int pivot = start+cnt;

    swap(arr[start],arr[pivot]);

    partition(arr,start,end,pivot);

    //left part
    quickSort(arr,start,pivot-1);

    //right part
    quickSort(arr,pivot+1,end);

}

int main() {
    int arr[] = {3,1,4,5,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = size-1;

    cout<<"Before: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //calling quick Sort
    quickSort(arr,start,end);

    cout<<"after: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}