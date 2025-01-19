#include<iostream>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(int arr[],int size) {
        // int peak = -1; //it will used to store index of peak value from array
        int start=0;
        int end=size-1;
        int mid;
        mid=start+(end-start)/2;
        while(start<end){
            if(arr[mid]<arr[mid+1]){
                start=mid+1;
            }
            else{
                end=mid;
            }
            mid=start+(end-start)/2;
        }
        return mid;
    }
};

int main(){
    int arr[]={0,1,2,3,4,5,6,10,8,7,5,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<size;
    Solution s;
    cout<<s.peakIndexInMountainArray(arr,size);
}