#include<iostream>
using namespace std;

class B{
    private:
        
    public:
        int a;
        int b;
        void func(){
            cout<<"I am func B. hihi haha huuu.";
        }

        void operator+ (B &obj){
            int value1 = this->a;
            int value2 = obj.a;
            cout<<"overloaded = "<<value2-value1<<endl;

        }
        
};




int main() {
    cout<<"hi";
    B obj1;
    B obj2;
    obj1.a  = 10;
    obj2.a = 15;

    obj1 + obj2;
    
    return 0;
}