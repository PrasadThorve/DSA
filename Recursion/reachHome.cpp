#include<iostream>
using namespace std;

void reachHome(int start, int dest){
    //base case 
    if(start == dest){
        cout<<"Reached the Home.";
        return;
    }

    //processing
    start++;

    //recursive call
    reachHome(start,dest);
}

int main() {
    int start = 1;
    int dest = 10;
    reachHome(start,dest);
    return 0;
}