#include<iostream>
using namespace std;
class A{
    int a;
    public:
        void setData(int a){
            this->a = a;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};
//Also, this is helpful for returning the value

//Using virtual functions, derived class's function can be called

int main(){
    A a;
    a.setData(4);
    a.getData();
    //or
    a.setData(4).getData();
    return 0;
}