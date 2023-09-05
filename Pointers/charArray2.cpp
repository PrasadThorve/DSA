#include<iostream>
using namespace std;

int sum(int *arr,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main() {
    int arr[6] = { 1, 3, 5, 7,8, 10};
    int n = 6;
    cout<<"sum = "<<sum(arr,2);
    return 0;
}