#include<iostream>
using namespace std;

int arraySum(int arr[], int size, int sum){
    //base condition
    if(size==0){
        return sum;
    }

    //processing
    sum += *arr;
    arr = arr+1;
    size--;
    return arraySum(arr,size,sum);
}

int main() {
    int arr[6] = {4,6,8,10,100};    
    int size = 5;
    int sum = 0;

    // int ans = isSort(arr,size);
    // cout<<ans<<endl;
    
    int ans = arraySum(arr,size,sum);
    cout<<ans;

    return 0;
}