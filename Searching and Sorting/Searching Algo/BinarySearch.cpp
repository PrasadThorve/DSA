// Condition Element should be in monotonic Order

#include <iostream>
using namespace std;

void BinarySearch(int arr[],int start,int end,int key){
    int mid = (start+end)/2;
    // cout<<"mid="<<mid<<endl;
    if(key==arr[mid]){
        cout<<"Element is present in the array at position "<<mid<<endl;
        return;
    }
    else if (key<arr[mid])
    {
        end=mid-1;
        if(end<start){
            cout<<"Element is not present in the array"<<endl;
            return;
        }
        BinarySearch(arr,start,end,key);
        
    }
    else if(key>arr[mid]){
        start=mid+1;
        if(start>end){
            cout<<"Element is not present in the array"<<endl;
            return;
        }
        BinarySearch(arr,start,end,key);
    }
    

}

int main(){
    int arr[] = {2,4,8,10,15,17,20,25,27};
    int size = (sizeof(arr))/sizeof(arr[0]);
    // cout<<"size="<<size<<endl;
    int start=0;
    int end = size-1;
    int key;
    cout<<"Enter the element to Search: ";
    cin>>key;
    BinarySearch(arr,start,end,key);

    return 0;
}