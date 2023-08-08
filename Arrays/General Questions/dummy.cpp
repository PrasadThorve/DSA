#include <iostream>
using namespace std;
int rep(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int k=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                k++;
            }
        }
        if(k==1)
        {
            return arr[i];
        }
    }
    return -1;
}
int main() {
    int arr[]={2,7,4,5,2,7,5,};
    int n=7;
    cout<<rep(arr,n)<<endl;
    return 0;
}