#include<iostream>
using namespace std;

int main() {
    /*
    int second = 20;
    int *p = 0;
    p = &second;
    int first = 10;
    *p = first;
    // p = &first;
    cout<<*p<<endl; */

    
    /* 
    int *p = nullptr;
    int first = 115;
    *p = first;
    cout<<*p;
    */

   /*float first = 12.5;
   first++;
   cout<<first;*/
   
   /*int arr[5];
   int first = 42; 
   int *ptr = &first;
   cout<<sizeof(arr)<<" "<<sizeof(ptr);*/
   
   /*int arr[6] = {11,12,33};
   cout<<arr<<endl<<&arr<<endl;
   int p =10;
   int *ptr = &p;
   cout<<"check"<<endl;
   cout<<ptr<<endl;
   cout<<&ptr<<endl;*/

//    int arr[6] = {11, 22, 33, 44};
//    int *p = arr++;

// char arr[] = "abcde";
// char *p = &arr[0];
// cout<<p;    

char arr[] = "abcde";
char *p = arr;
cout<<arr[0]<<" "<<p[0];    
   

    return 0;
}